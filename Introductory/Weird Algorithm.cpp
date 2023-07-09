#include<bits/stdc++.h>
#define int long long
#define mod 1
 
 
 
 
 
 
 
 
 
using namespace std;
 
 
int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	cout<<t<<" ";
	while(t!=1){
        if(t%2==0){
            t=t/2;
            cout<<t<<" ";
        }
        else{
            t=3*t+1;
            cout<<t<<" ";
        } 
    }
        cout<<endl;
	    
        
 
        
 
	    
	
	return 0;
}