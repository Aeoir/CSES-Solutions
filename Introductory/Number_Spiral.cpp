#include<bits/stdc++.h>
#define int long long
#define mod 1
 
 
 
 
 
 
 
 
 
using namespace std;
 
 
int32_t main() {
	// your code goes here
	int t;
    cin>> t;
 
    while(t--){
        int x,y;
        cin>>y>>x;
        int k=max(x,y)-1;
        int ans=0;
        ans+=k*k;
        if(k%2==0)ans+=x+k+1-y;
 
        else ans+=y+k+1-x;
 
        cout<<ans<<endl;
    }
 
    
        
	    
        
 
        
 
	    
	
	return 0;
}