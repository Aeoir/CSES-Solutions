#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(){
 
    int n,x;
    cin>>n>>x;
 
    int prices[n+1];
    int pages[n+1];
 
    for(int i=1;i<=n;i++) cin>>prices[i];
    for(int i=1;i<=n;i++) cin>>pages[i];
 
    int a[n+1][x+1]={0};   
    //pages for books,price
    memset(a,0,sizeof(a));
    
 
    for(int i=1;i<=n;i++){
        
 
        for(int j=1;j<=x;j++){
            //if(i==0 || j==0 ) continue;
            int k1= (i==1)? 0: a[i-1][j];
 
            int k2= (j<prices[i]) ? 0: pages[i]+a[i-1][j-prices[i]];
            a[i][j]=max(k1,k2);
            
            }
 
        }
    
    
    
    cout<<a[n][x]<<endl;
 
    return 0;
}
