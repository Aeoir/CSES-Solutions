#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl "\n"
 
using namespace std;
 
    
 
 
int32_t main() {
	// your code goes here
	
    
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(n),b(m);
 
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
 
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
 
        int i=0;
        int ans=0;
        int j=0;
 
        while(j<m && i<n){
            if(a[i]+k>=b[j] && a[i]-k<=b[j]){
                ans++;
                i++;
                j++;
            }
            else if(b[j]>a[i]) i++;
            else j++;
            if(a[i]>b[m-1]+k || b[j]>a[n-1]+k) break;
        }
 
        cout<<ans<<endl;
 
    
 
	return 0;
}