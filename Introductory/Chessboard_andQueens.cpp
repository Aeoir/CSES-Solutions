#include<bits/stdc++.h>
#define int long long
#define fio ios::sync_with_stdio(false);cin.tie(nullptr)
#define mod 1000000007
#define vi vector<int>
#define in(a) for(int i=0;i<a.size();i++) cin>>a[i]
#define fo(n) for(int i=0;i<n;i++)
#define out(a) for(auto x: a) cout<<x<<" ";cout<<endl
#define endl "\n"
//#define all(x) x.begin(),x.end()
int gcd (int a, int b) {return b ? gcd (b, a % b) : a;}
 
using namespace std;
 
    
 
 
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    //cin>>tt;
    
 
    while(tt--){
        vector<string> a(8);
        fo(8){
            cin>>a[i];
        }
 
        int ans=0;
        vi col(8);
 
        iota(col.begin(),col.end(),0);
        
 
        
 
        do{
            int f=1;
            
            fo(8){
                if(a[i][col[i]]=='*') f=0;
            }
            
            vi diag(15,0);
 
            fo(8){
                if(diag[i+col[i]]==1) f=0;
                diag[i+col[i]]=1;
            }
 
            fo(15) diag[i]=0;
 
            fo(8){
                if(diag[(i-col[i]+7)]==1) f=0;
                diag[(i-col[i]+7)]=1;
            }
        
 
 
 
            ans+=f;
 
        } while(next_permutation(col.begin(),col.end()));
 
        cout<<ans<<endl;
    }
 
	return 0;
}