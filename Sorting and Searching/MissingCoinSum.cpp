#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vi vector<int>
#define in(a) for(int i=0;i<a.size();i++) cin>>a[i]
#define fo(n) for(int i=0;i<n;i++)
#define out(a) for(auto x: a) cout<<x<<" ";cout<<endl
#define endl "\n"
 
using namespace std;
 
    
 
 
int32_t main() {
	// your code goes here
	
    int t=1;
    
    
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        in(a);
 
        sort(a.begin(),a.end());
 
        int sum=1;
 
        fo(n){
            if(a[i]>sum) break;
            else{
                sum+=a[i];
            }
        }
 
        cout<<sum<<endl;
 
 
    }
 
	return 0;
}