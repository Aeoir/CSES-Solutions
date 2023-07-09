#include<bits/stdc++.h>
//#define int long long
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
        int n;
        cin>>n;
 
        vector<pair<int,int>> a;
        fo(n){
            int c,b;
            cin>>c>>b;
            a.push_back({b,c});
            
        }
        sort(a.begin(),a.end());
 
        int ans=1;
        int k=a.begin()->first;
        
        for(auto x:a){
            if(x.second>=k){
                ans++;
                k=x.first;
            }
            
        }
 
        cout<<ans<<endl;
        
 
    }
 
	return 0;
}
