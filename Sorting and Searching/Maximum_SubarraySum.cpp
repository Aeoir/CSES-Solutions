#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl "\n"
 
using namespace std;
 
    
 
 
int32_t main() {
	// your code goes here
	
    int t=1;
    
 
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
 
        for(int i=0;i<n;i++) cin>>a[i];
 
        int t=0;
        int sum=0;
 
        for(int i=0;i<n;i++){
            t+=a[i];
            if(sum==0) sum=t;
            else sum=max(sum,t);
            if(t<0) t=0;
            
        }  
 
        cout<<sum<<endl;  
    }
 
	return 0;
}
