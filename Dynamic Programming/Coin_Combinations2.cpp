#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
int main(){
    int n,x;
    cin>>n>>x;
 
    vector<int> c(n+1,0);
    for(int i=1;i<=n;i++) cin>>c[i];
 
    int tre[n+1][x+1];
 
    for(int i=1;i<=n;i++){
        tre[i][0]=1;
 
        for(int j=1;j<=x;j++){
 
            tre[i][j]= ((i==1) ? 0: tre[i-1][j]) + ((c[i]>j) ? 0: tre[i][j-c[i]]);
 
            tre[i][j]%=mod;
        }
 
    }
    cout<<tre[n][x]<<endl;
    
 
 
 
 
    return 0;
}