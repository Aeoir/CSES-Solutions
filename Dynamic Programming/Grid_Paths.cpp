#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
int main(){
 
    int n;
    cin>>n;
    char grid[n+1][n+1];
    int mw[n+1][n+1];
    mw[0][0]=1;
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='*'){
                mw[i][j]=0;             
            }
            else if(i+j==2) mw[i][j]=1;
            else {mw[i][j]=0; 
            
            if(i>1) mw[i][j]+=mw[i-1][j];
            if(j>1) mw[i][j]+=mw[i][j-1]; 
            mw[i][j]%=mod;
            }
        }
    }
 
   
 
    
 
 
    cout<<mw[n][n];
 
    return 0;
}