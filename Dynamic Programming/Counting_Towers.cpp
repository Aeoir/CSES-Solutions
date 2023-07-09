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
    cin>>tt;
    
 
    while(tt--){
 
    int n;
    cin>>n;
 
    int dp[n+2][2];
 
    dp[n+1][0]=dp[n+1][1]=1;
    
    for(int i=n;i>=2;i--){
        int t1=(dp[i+1][0]+dp[i+1][1])%mod;
        int t2=dp[i+1][0];
        int t3=2*dp[i+1][0]%mod;
        int t4=dp[i+1][1];
 
 
 
        dp[i][0]=t1+t2+t3;
        dp[i][1]=t1+t4;
            }
 
 
    cout<<(dp[2][1]+dp[2][0])%mod<<endl;
    
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}
