#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int n1=n;
    unordered_set<int> digits;
    while(n>=1){
        digits.insert(n%10);
        n/=10;
    }
    int x=digits.size();
 
    int mw[n1+1];
    mw[0]=0;
 
    for(int i=1;i<=n1;i++){
        mw[i]=n1+1;
       for(int j=i;j>0;j/=10){
        mw[i]=min(mw[i],mw[i-j%10]+1);
       }
    }
 
    
    cout<<mw[n1]<<endl;
    
    
    return 0;
}