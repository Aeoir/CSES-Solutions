#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
 
int main(){
    int n,x;
    cin>>n>>x;
 
    int coins[n+1];
    for(int i=1;i<=n;i++) cin>>coins[i];
 
    vector<int> ways(x+1,0);
 
    ways[0]=1;
 
    for(int i=1;i<=x;i++){
        
        for(int j=1;j<=n;j++){
            if(i>=coins[j])ways[i]+=ways[i-coins[j]];
            ways[i]%=mod;
        }
    }
 
    cout<<ways[x]<<endl;
 
    return 0;
 
}