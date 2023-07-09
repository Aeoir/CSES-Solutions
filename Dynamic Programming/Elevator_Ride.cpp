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
 
    //bit-masking
 
    int n,x;
    cin>>n>>x;
 
    vi w(n);
    in(w);
 
    int s=1<<n;
 
    vector<pair<int,int>> dp(s); //noOfRides, weightLastRide
 
    dp[0]={1,0};
 
    foo(s-1){
        
        pair<int,int> t={INT_MAX,INT_MAX};
 
        for(int j=0;j<n;j++){
            if(((1<<j) & i)==0) continue;
 
            auto it=dp[(1<<j)^i];
 
            if(it.second+w[j]<=x) it.second+=w[j];
            else{
                it.first+=1;
                it.second=w[j];
            }
 
            t=min(t,it);
        }
 
        dp[i]=t;
 
    }
 
 
    cout<<dp[s-1].first;
 
 
      
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}