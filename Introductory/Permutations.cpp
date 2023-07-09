#include<bits/stdc++.h>
#define int long long
#define mod 1
 
 
 
 
 
 
 
 
 
using namespace std;
 
 
int32_t main() {
	// your code goes here
	int n;
    cin>> n;
 
    if(n==1) cout<<1<<endl;
    if(n==4) cout<<"2 4 1 3"<<endl;
    else if(n<4) cout<<"NO SOLUTION"<<endl;
    else{
        for(int i=0;i<n;i+=2){
            cout<<i+1<<" ";
        }
        for(int i=1;i<n;i+=2){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
        
	    
        
 
        
 
	    
	
	return 0;
}