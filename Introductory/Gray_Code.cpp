#include<bits/stdc++.h>
//#define int long long
#define mod 1e9+7
 
using namespace std;
 
int g(int n){
    return n^(n>>1);
}
 
int32_t main() {
	// your code goes here
	
    int n;
    cin>>n;
    
    for(int i=0;i<pow(2,n);i++){
        int k=g(i);
        string s = bitset<64> (k).to_string().substr(64-n);
        cout<<s<<endl;
    }
    	
	return 0;
}