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
 
        sort(a.begin(),a.end());
        int m;
        if(n==1) m=a[0];
        else if(n%2==0) m=(a[n/2-1]+a[n/2])/2;
        else m=a[(n-1)/2];
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=abs(a[i]-m);
        }
 
        cout<<ans<<endl;
    }
 
	return 0;
}
