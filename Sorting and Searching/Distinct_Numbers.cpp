#include<bits/stdc++.h>
//#define int long long
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
    //cin>>tt;
    
 
    while(tt--){
        int n;
        cin>>n;
 
        set<int> s;
        int k;
        
        fo(n){
            cin>>k;
            s.insert(k);
        }
 
        cout<<s.size()<<endl;
 
 
    }
 
	return 0;
}