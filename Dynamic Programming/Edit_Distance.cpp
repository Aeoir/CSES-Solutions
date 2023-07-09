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
 
    string s1,s2;
    cin>>s1>>s2;
    n=s1.size();
    m=s2.size();
 
    int a[n+1][m+1];
 
    for(int i=0;i<=n;i++){
 
        for(int j=0;j<=m;j++){
            if(i==0) a[i][j]=j;
            else if(j==0)a[i][j]=i;
 
            else{
                int k= (s1[i-1]!=s2[j-1]);
                
                a[i][j]=min(a[i-1][j-1]+k, min(a[i-1][j],a[i][j-1])+1);
 
            }
        }
    }
 
 
    cout<<a[n][m]<<endl;
 
 
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