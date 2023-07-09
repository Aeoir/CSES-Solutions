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
 
void insert(map<int,int> &c, int v, int adv){
    if(c[v]>=adv) return;
 
    c[v]=adv;
    auto it=c.find(v);
    it++;
 
    while(it->second<=adv && it!=c.end()){
        auto t=it;
        it++;
        c.erase(t);
    }
}
 
int p(map<int,int> &c, int v){
    auto it=c.lower_bound(v);
    if(it==c.begin()) return 0;
    
        it--;
        return it->second;
    
 
}
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
 
    int dp[n];
    dp[0]=1;
 
    map<int,int> adv;
 
    adv[a[0]]=1;
 
    foo(n-1){
        dp[i]=1+p(adv,a[i]);
        insert(adv,a[i],dp[i]);
    }
 
 
    int k=*max_element(dp,dp+n);
 
 
    cout<<k<<endl;
 
 
 
 
 
    
 
 
    }
 
	return 0;
}
