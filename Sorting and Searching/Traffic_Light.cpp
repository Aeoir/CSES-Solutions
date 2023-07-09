#include<bits/stdc++.h>
#define int long long
#define fio ios::sync_with_stdio(false);cin.tie(nullptr)
#define mod 1000000007
#define vi vector<int>
#define in(a) for(int i=0;i<a.size();i++) cin>>a[i]
#define fo(n) for(int i=0;i<n;i++)
#define out(a) for(auto x: a) cout<<x<<" ";cout<<endl
#define endl "\n"
 
using namespace std;
 
    
 
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    
    
    
    while(tt--){
        int x,n;
        cin>>x>>n;
 
        set<int> s{0,x};
        multiset<int> d{x};
        
        
        int k;
        fo(n){
            cin>>k;
 
            int t2=*s.upper_bound(k);
            int t1=*(--s.upper_bound(k));
 
            s.insert(k);
            d.erase(d.find(t2-t1));
            d.insert(k-t1);
            d.insert(t2-k);
            
            
            cout<<*(--d.end())<<" ";
        }
 
 
    }
 
	return 0;
}