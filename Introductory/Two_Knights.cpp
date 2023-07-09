#include<bits/stdc++.h>
#define int long long
#define mod 1
 
using namespace std;
 
int solve(int i){
    return i*i*(i*i-1)/2-4*(i-1)*(i-2);
}
 
int32_t main() {
	// your code goes here
	int n;
    cin>>n;
 
    int ans;
    for(int i=1;i<n+1;i++){
        ans=solve(i);
        cout<<ans<<endl;
    }
 
                    
        
	    
        
 
        
 
	    
	
	return 0;
}