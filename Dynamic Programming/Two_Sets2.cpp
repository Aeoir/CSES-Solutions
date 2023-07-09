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
 
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    //cin>>tt;
    
 
    while(tt--){
 
    int n;
    cin>>n;
 
    int k=(n*(n+1));
    if(k%4){
        cout<<0<<endl;
        continue;
    } 
    k/=4;
 
 
    int dp[n+1][k+1];
    dp[0][0]=1;
    foo(k) dp[0][i]=0;
 
    foo(n){
        for(int x=0;x<=k;x++){
            dp[i][x]=dp[i-1][x]+((x<i) ? 0: dp[i-1][x-i]);
            dp[i][x]%=mod;
        }
    }
 
    
    cout<<(dp[n][k]*500000004)%mod<<endl;
//mod inverse of 2 instead od divide
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}