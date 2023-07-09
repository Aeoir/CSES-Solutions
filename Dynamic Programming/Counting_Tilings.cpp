#include<bits/stdc++.h>
#define int long long
#define fio ios::sync_with_stdio(false);cin.tie(nullptr)
#define mod 1000000007
#define vi vector<int>
#define in(a) for(int i=0;i<a.size();i++) cin>>a[i]
#define in1(a) for(int i=1;i<a.size();i++) cin>>a[i]
#define fo(n) for(int i=0;i<n;i++)
#define foo(n) for(int i=1;i<=n;i++)
#define out(a) for(auto x: a) cout<<x<<" ";cout<<endl
#define endl "\n"
int gcd (int a, int b) {return b ? gcd (b, a % b) : a;}
 
using namespace std;
int dp[1001][1<<11];
 
 
 
void nextMask(int cur, int i, int next, int n, vi & next_mask){
 
    if(i==n+1){
        next_mask.push_back(next);
        return;
    }
 
    if((cur & (1<<i)) !=0){
        nextMask(cur,i+1,next,n,next_mask);
    }
 
    if(i!=n){
        if((cur & (1<<i)) ==0 && (cur & (1<<(i+1)))==0){
            nextMask(cur,i+2,next,n,next_mask);
        }
    }
 
    if((cur & (1<<i))==0 ){
        nextMask(cur,i+1,next+(1<<i),n,next_mask);
    }
 
 
}
 
 
 
 
int solve(int i, int mask, int m, int n){
    int ans=0;
 
    if(i==m+1){
        if(!mask) return 1;
        return 0;
    }
 
    if(dp[i][mask]!=-1) return dp[i][mask];
    vi next_mask;
 
    nextMask(mask,1,0,n,next_mask);
 
    for(int nx: next_mask){
        ans=ans%mod+solve(i+1,nx,m,n)%mod;
        
    }
 
 
    ans%=mod;
 
    dp[i][mask]=ans;
 
    return dp[i][mask];
 
}
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    //cin>>tt;
    
 
    while(tt--){
 
    int n,m;
    cin>>n>>m;
 
    memset(dp,-1,sizeof(dp));
 
    cout<<solve(1,0,m,n)<<endl;
    
 
    
    
      
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}