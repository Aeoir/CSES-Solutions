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
 
 
struct range{
    int l,r,index;
};
 
bool cmp(range & r1, range& r2){
    if(r1.l==r2.l){
        return r1.r>r2.r;
    }
    return r1.l<r2.l;
}
 
 
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    //cin>>tt;
    
 
    while(tt--){
 
    int n;
    cin>>n;
 
    bool contains[n];
    bool contained[n];
 
    vector<range> a(n);
 
    fo(n){
        cin>>a[i].l>>a[i].r;
        a[i].index=i;
    }
 
    sort(a.begin(),a.end(),cmp);
 
    int mx=0; int mn=INT_MAX;
 
    fo(n){
        contained[a[i].index]=(a[i].r<=mx);
        mx=max(mx,a[i].r);
    }
 
    for(int i=n-1;i>=0;i--){
        contains[a[i].index]=(a[i].r>=mn);
        mn=min(mn,a[i].r);
    }
 
    out(contains);
    out(contained);
    
      
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}