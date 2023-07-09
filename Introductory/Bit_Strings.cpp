#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
 
using namespace std;
 
int solve(int i){
    return i*i*(i*i-1)/2-4*(i-1)*(i-2);
}
 
int32_t main() {
	// your code goes here
	int n;
    cin>>n;
    int ans=1;
    while(n--){
        ans*=2;
        ans=ans%mod;
    }
    cout<<ans<<endl;
 
    
                    
        
	    
        
 
        
 
	    
	
	return 0;
}