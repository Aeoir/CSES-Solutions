#include<bits/stdc++.h>
//#define int long long
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
 
void solve(){
    int n,m;
    cin>>n>>m;
    vi a(n+1);
    in1(a);
 
    int arr[n+2][m+2];
    //no of arrays for [position][max value]
    memset(arr,0,sizeof(arr));
 
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=m;j++){
            if(a[i]==0 || a[i]==j){
                if(i==1) arr[i][j]=1;
                else 
                arr[i][j]=((arr[i-1][j-1]+arr[i-1][j])%mod+arr[i-1][j+1]);
                arr[i][j]%=mod;
            }
            
 
        }
 
    }
 
 
 
 
    int k=0;
    foo(m){
        k+=arr[n][i];
        k%=mod;
    }
    cout<<k<<endl;
    //ans sigma arr[n][i] for i form 1 to m
}    
 
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    //cin>>tt;
    
 
    while(tt--){
        solve();
 
 
    
 
 
    }
 
	return 0;
}