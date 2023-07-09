#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
 
using namespace std;
 
int solve(int i){
    return i*i*(i*i-1)/2-4*(i-1)*(i-2);
}
 
int32_t main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
 
 
        int x,y;
        cin>>x>>y;
        int k=x+y;
        
        if(k%3 || (2*min(x,y)<max(x,y))) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
 
    }
    
                    
        
	    
        
 
        
 
	    
	
	return 0;
}