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
 
const int m=(int)5*1e3;
int n;
 
int dp[m][m];
int a[m];
 
 
int solve(int l, int r){
    if(dp[l][r]!=-1) return dp[l][r];
 
    if(l==r) dp[l][r]= n%2 ? a[l]:0;
 
    else if(n%2==(r-l+1)%2){
        dp[l][r]=max(solve(l+1,r)+a[l],solve(l,r-1)+a[r]);
 
    }
 
    else{
        dp[l][r]=min(solve(l+1,r),solve(l,r-1));
    }
 
 
    return dp[l][r];
}
 
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    //cin>>tt;
    
 
    while(tt--){
 
    //int n;
    cin>>n;
 
    fo(n) cin>>a[i];
 
    
    memset(dp,-1,sizeof(dp));
 
    cout<<solve(0,n-1)<<endl;
 
      
    
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}
 
 