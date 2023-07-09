#include<bits/stdc++.h>
#define int long long
#define fio ios::sync_with_stdio(false);cin.tie(nullptr)
#define mod 1000000007
#define vi vector<int>
#define in(a) for(int i=0;i<a.size();i++) cin>>a[i]
#define fo(n) for(int i=0;i<n;i++)
#define out(a) for(auto x: a) cout<<x<<" ";cout<<endl
#define endl "\n"
 
using namespace std;
 
    
 
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    
    
 
    while(tt--){
        int n;
        cin>>n;
 
        vi a(n);
        in(a);
 
        map<int,int> m;
        int tsum=0;
        int ans=0;
        m[0]=1;
        fo(n){
            tsum+=a[i]%n;
            tsum=(tsum+n)%n;
 
            ans+=m[tsum];
 
 
            m[tsum]++;
        }
 
        cout<<ans<<endl;
 
    }
 
	return 0;
}
