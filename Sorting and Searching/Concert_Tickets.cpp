#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vi vector<int>
#define in(a) for(int i=0;i<a.size();i++) cin>>a[i]
#define fo(n) for(int i=0;i<n;i++)
#define out(a) for(auto x: a) cout<<x<<" ";cout<<endl
#define endl "\n"
 
using namespace std;
 
    
 
 
int32_t main() {
	// your code goes here
	
    int t=1;
    
    
    while(t--){
        int n,m;
        cin>>n>>m;
        multiset<int> a;
 
        fo(n){
            int k;
            cin>>k;
            a.insert(k);
        }
 
        fo(m){
            int k;
            cin>>k;
            auto it=a.lower_bound(k+1);
            
            if(it==a.begin()) cout<<-1<<endl;
            else{
                cout<<*(--it)<<endl;
                a.erase(it);
 
            }
 
        }
 
 
    }
 
	return 0;
}