#include<bits/stdc++.h>
#define int long long
#define mod 1
 
 
 
 
 
 
 
 
 
using namespace std;
 
 
int32_t main() {
	// your code goes here
	string s;
	cin>>s;
	int ans=1;
    int t=1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]) t+=1;
        else t=1;
        if(t>ans) ans=t;
    }
    cout<<ans<<endl;
	
        
	    
        
 
        
 
	    
	
	return 0;
}