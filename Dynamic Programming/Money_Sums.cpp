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
 
    
    
    vi ans;
 
 
    int m=(int)1e5;
    vector<bool> a(m+1,0);
    a[0]=1;
    
 
    fo(n){
        
        int k;
        cin>>k;
 
        for(int i=m;i>=k;i--) a[i]=a[i]|a[i-k];
    }
 
 
    foo(m){
        if(a[i]) ans.push_back(i);
    }
    
    cout<<ans.size()<<endl;
    out(ans);
 
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}