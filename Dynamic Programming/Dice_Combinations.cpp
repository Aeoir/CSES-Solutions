#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
 
 
int main(){
    int n;
    cin>>n;
    
 
    vector<int> ans(n+1,0);
    ans[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(j>i) break;
            ans[i]+=ans[i-j];
            ans[i]=ans[i]%mod;
        }
    }
    
    cout<<ans[n]<<endl;
    return 0;
 
}