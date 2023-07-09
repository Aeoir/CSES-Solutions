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
	
    int tt=1;
    
    
    while(tt--){
        int n;
        cin>>n;
        
        vi a(n);
        in(a);
 
        int ans=0;
        map<int,int> m;
        int t=0;
        int k=0;
        fo(n){
                
            if(m.find(a[i])==m.end()){
                m[a[i]]=i+1;
                t++;
                
            }
            else{
                k=max(k,m[a[i]]);
                m[a[i]]=i+1;
 
            }
            t=i+1-k;
 
            ans=max(ans,t);
 
        }
        
        cout<<ans<<endl;
 
    }
 
	return 0;
}
