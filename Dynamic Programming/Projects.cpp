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
 
struct project{
    int st,end,r;
};
 
bool cmp(project& p1,project &p2){
    return p1.end<p2.end;
}
 
 
int find(vi &ed, int val){
    auto it=lower_bound(ed.begin(),ed.end(),val);
 
    if(it==ed.begin()) return 0;
    
    it--;
    return 1+ distance(ed.begin(),it);
 
}
 
 
 
int solve(vector<project> &v){
    int n=v.size();
    int dp[n+1];
    dp[0]=0;
 
    vi edpt;
    foo(n-1){
        edpt.push_back(v[i].end);
    }
 
    foo(n-1){
        int t1=dp[i-1];
        int t2=v[i].r;
 
        int j=find(edpt,v[i].st);
        t2+=dp[j];
        //ed of 
 
        dp[i]=max(t1,t2);
        
    }
 
 
 
    return dp[n-1];
}
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    //cin>>tt;
    
 
    while(tt--){
    
    int n;
    cin>>n;
 
    vector<project> v(n+1);
 
    foo(n){
        cin>>v[i].st>>v[i].end>>v[i].r;
    }
 
    sort(v.begin()+1,v.end(),cmp);
 
 
    cout<<solve(v);
      
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}