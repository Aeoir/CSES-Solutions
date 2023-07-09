#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
#define endl "\n"
 
using namespace std;
 
    
 
 
int32_t main() {
	// your code goes here
	
    int t=1;
    ;
 
    while(t--){
        int n,x;
        cin>>n>>x;
 
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
 
        sort(a.begin(),a.end());
 
        vector<int> b=a;
        reverse(b.begin(),b.end());
 
        int ans=0;
        int l=0;
        int r=n-1;
        while(l<r){
            if(a[l]+a[r]<=x){
                
                l++;
            }
            r--;
 
            ans++;
 
        }
        if(l==r) ans++;        
        
        cout<<ans<<endl;
    }
	return 0;
 
}