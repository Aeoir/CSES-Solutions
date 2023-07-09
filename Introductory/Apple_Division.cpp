#include<bits/stdc++.h>
#define int long long
#define mod 1e9+7
#define endl "\n"
 
 
 
 
 
 
 
 
using namespace std;
 
 
 
int32_t main() {
	// your code goes here
	int n;
    cin>>n;
 
    int s=0;
    vector<int> a(n);
 
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    int ans=s;
    for(int i=0;i<(1<<n);i++){
        int t=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)) t+=a[j]; 
        }
 
        ans=min(ans,abs(s-2*t));
    }
 
    cout<<ans<<endl;
 
	return 0;
}