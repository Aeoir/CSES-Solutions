#include<bits/stdc++.h>
#define int long long
#define fio ios::sync_with_stdio(false);cin.tie(nullptr)
#define mod 1000000007
#define vi vector<int>
#define in(a) for(int i=0;i<a.size();i++) cin>>a[i]
#define in1(a) for(int i=1;i<a.size();i++) cin>>a[i]
#define fo(n) for(int i=0;i<n;i++)
#define foo(n) for(int i=1;i<=n;i++)
#define out(a) for(auto x: a) cout<<x<<" ";cout<<endl
#define endl "\n"
int gcd (int a, int b) {return b ? gcd (b, a % b) : a;}
 
using namespace std;
 
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    //cin>>tt;
    
 
    while(tt--){
 
    int n,x;
    cin>>n>>x;
 
    vector<pair<int,int>> a(n);
    fo(n){
        cin>>a[i].first;
        a[i].second=i+1;
    }
 
    sort(a.begin(),a.end());
    
    int f=0;
    fo(n){
 
        int x2=x-a[i].first;
        for(int j=i+1,k=n-1;j<k;j++){
            
 
            while(a[j].first+a[k].first>x2) k--;
            if(j<k && a[j].first+a[k].first==x2){
                cout<<a[i].second<<" "<<a[j].second<<
                " "<<a[k].second<<endl;
                return 0;
            }
 
        }
 
 
    }
 
     cout<<"IMPOSSIBLE"<<endl;
      
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}