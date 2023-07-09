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
    int a,b;
 
    cin>>a>>b;
 
    int m=max(a,b);
 
    int ar=a*b;
 
    int ans[a+1][b+1];
 
    foo(a){
        for(int j=1;j<=b;j++){
            if(i==j) ans[i][j]=0;
            else{
                int t=INT_MAX;
                for(int q=1;q<j;q++) t=min(t,1+ans[i][j-q]+ans[i][q]);
                for(int w=1;w<i;w++) t=min(t,1+ans[i-w][j]+ans[w][j]) ;
                ans[i][j]=t;
 
            }
        }
    }
 
    cout<<ans[a][b];
 
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