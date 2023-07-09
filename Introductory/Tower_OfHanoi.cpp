#include<bits/stdc++.h>
//#define int long long
#define mod 1e9+7
#define endl "\n"
 
 
 
 
 
 
 
 
using namespace std;
 
void solve(int n, int a, int b, int c){
    if(n==1){
        cout<<a<<" "<<c<<endl;
        return;
    }
 
    solve(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    solve(n-1,b,a,c);
 
}
 
int32_t main() {
	// your code goes here
	int n;
    cin>>n;
 
    cout<<pow(2,n)-1<<endl;
    solve(n,1,2,3);
 
 
 
 
    
	return 0;
}