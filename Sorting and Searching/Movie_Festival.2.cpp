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
 
struct mov{
    int st,ed,index;
};
 
bool cmp(mov& m1, mov& m2){
    return m1.ed<m2.ed;
}
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    //cin>>tt;
    
 
    while(tt--){
 
    int n,k;
    cin>>n>>k;
 
    vector<mov> a(n);
 
    fo(n) cin>>a[i].st>>a[i].ed;
 
    sort(a.begin(),a.end(),cmp);
 
    set<pair<int,int>> people;
 
    int no=0;
 
    fo(n){
 
        if(people.empty()) {people.insert({a[i].ed*-1,-1}); continue;}
 
        auto it=people.lower_bound({a[i].st*-1,-1});
 
        if(it!=people.end()){
            people.erase(it);
            people.insert({a[i].ed*-1,i});
        }
 
        else if(people.size()<k){
            people.insert({a[i].ed*-1,i});
        }
 
        else{
            no++;
        }
 
 
 
    }
 
 
    cout<<n-no<<endl;
 
      
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}