#include<bits/stdc++.h>
#define int long long
#define mod 1
 
 
 
 
 
 
 
 
 
using namespace std;
 
 
int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	int ans=0;
    for(int i=0;i<t-1;i++){
        int k;
        cin>>k;
        ans+=k;
    }
    cout<<t*(t+1)/2-ans<<endl;
	
        
	    
        
 
        
 
	    
	
	return 0;
}
