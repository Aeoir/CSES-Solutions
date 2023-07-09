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
        multiset<int> s;
        int towers=0;
 
        fo(n){
            if(s.upper_bound(a[i])==s.end()){
                towers++;
                s.insert(a[i]);
            }        
            else{
                s.erase(s.upper_bound(a[i]));
                s.insert(a[i]);
            }
        }
 
        cout<<towers<<endl;
 
    }
 
	return 0;
}