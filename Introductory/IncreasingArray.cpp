#include<bits/stdc++.h>
#define int long long
#define mod 1
 
 
 
 
 
 
 
 
 
using namespace std;
 
 
int32_t main() {
	// your code goes here
	int n;
    cin>> n;
 
    vector<int> a(n);
 
    for(int i=0;i<n;i++) cin>>a[i];
	int ans=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            
            ans+=a[i]-a[i+1];
            a[i+1]=a[i];
        }
    }
 
    cout<<ans<<endl;
        
	    
        
 
        
 
	    
	
	return 0;
}