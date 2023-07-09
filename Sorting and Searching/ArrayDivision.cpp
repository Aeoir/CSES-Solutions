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
 
    int n,k;
    cin>>n>>k;
 
    int mx=0;
    int a[n];
 
    fo(n){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
	int low = mx;	
	int hi = 1e18;
	int maximumSum = 1e18;
	while (low<=hi)
	{
		int mid = (low+hi)/2;
		int blocks = 1;
		int sum = 0;
        for(int i = 0; i < n; i++)
		{
			if (sum + a[i] > mid)
			{
				sum = 0;
				blocks++;
			}
			sum += a[i];
		}
		if (blocks > k)
			low = mid+1;
		else
        {
			if (mid < maximumSum)
				maximumSum = mid;
			hi = mid-1;
		}
	}
 
    cout<<maximumSum<<endl;
 
 
 
 
 
    
 
 
    }
 
	return 0;
}