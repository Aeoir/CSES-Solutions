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
 
    vi a(n);
    in(a);
 
    stack<pair<int,int>> s;
 
    fo(n){
        while(!s.empty() && s.top().first>=a[i]) s.pop();
 
        if(s.empty()) cout<<0<<" ";
        else cout<<s.top().second<<" ";
 
        s.push({a[i],i+1});
        
    }
 
      
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}