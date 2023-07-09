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
 
    int n, x;
    cin >> n >> x;
    vi a(n);
    in(a);
 
    map<int,pair<int,int> > aToPosision;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
            if (aToPosision.count(x-a[i]-a[j]))
            {
                cout << i+1 << " "<< j+1 << " "
                    << aToPosision[x-a[i]-a[j]].first + 1 << " "
                    << aToPosision[x-a[i]-a[j]].second + 1;
                return 0;
            }
        for (int j = 0; j < i; j++)
            aToPosision[a[i]+a[j]] = {i,j};
    }
    cout << "IMPOSSIBLE";
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}