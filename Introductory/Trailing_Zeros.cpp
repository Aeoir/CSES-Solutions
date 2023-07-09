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
    int ans=0;
    int k=5;
 
    while(k<=n){
        ans+=n/k;
        k*=5;
    }
 
    cout<<ans<<endl;
    
                    
        
	    
        
 
        
 
	    
	
	return 0;
}
