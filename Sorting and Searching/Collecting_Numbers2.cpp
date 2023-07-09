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
 
 
    int n,q;
    cin>>n>>q;
    vector<int> values(n+1);
    vector<int> positionOf(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> values[i];
        positionOf[values[i]] = i;
    }
    int answer = 1;
    for(int i=1; i<n; i++)
        answer += (positionOf[i] > positionOf[i+1]);
    int l, r;
    set<pair<int,int>> updatedPairs; 
    while(q--)
    {
        cin>>l>>r;
        if (values[l]+1 <= n)
            updatedPairs.insert({values[l], values[l]+1});
        if (values[l]-1 >= 1)
            updatedPairs.insert({values[l]-1, values[l]});
        if (values[r]+1 <= n)
            updatedPairs.insert({values[r], values[r]+1});
        if (values[r]-1 >= 1)
            updatedPairs.insert({values[r]-1, values[r]});
        for(pair<int,int> swapped : updatedPairs)
            answer -= positionOf[swapped.first]>positionOf[swapped.second];
        swap(values[l], values[r]);
        positionOf[values[l]] = l;
        positionOf[values[r]] = r;
        for(pair<int,int> swapped : updatedPairs)
            answer += positionOf[swapped.first]>positionOf[swapped.second];
        cout << answer << endl;
        updatedPairs.clear();
    }
 
 
 
 
    
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}