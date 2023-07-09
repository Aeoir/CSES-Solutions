
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
 
        map<int,int> m;
        fo(n){
            int k;
            cin>>k;
            m[k]=i;
        }
 
        int rounds=1;
 
        int k=1;
        int i=2;
        while(i<=n){
 
            while(m[k]<=m[i]){
                
                k++;
                i++;
                
            }
            if(i==n+1){;}
            else {
            k++;
            i++;
            rounds++; 
            }
        }
        
        cout<<rounds<<endl;
    }
 
	return 0;
}