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
    
int n,a,b;
    cin >> n >> a >> b;
    vi values(n+1);
    for(int i = 1; i <=n; i++)
        cin >> values[i];
    for(int i = 1; i <= n; i++)
        values[i] += values[i-1];
    set<pair<int,int>> rightBoundaries;
    for(int i = a; i<= b;i++)
        rightBoundaries.insert({values[i],i});
    int maxSum = -LONG_LONG_MAX;
    for(int i= 1 ;i <= n-a+1; i++)
    {
        maxSum = max(maxSum,rightBoundaries.rbegin()->first-values[i-1]);
        rightBoundaries.erase({values[i+a-1],i+a-1});
        if (i+b <= n)
            rightBoundaries.insert({values[i+b],i+b});
    }
    cout << maxSum; 
    
 
 
    
 
    
      
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}
