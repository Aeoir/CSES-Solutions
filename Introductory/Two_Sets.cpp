#include<bits/stdc++.h>
#define int long long
#define mod 1
 
using namespace std;
 
int solve(int i){
    return i*i*(i*i-1)/2-4*(i-1)*(i-2);
}
 
int32_t main() {
	// your code goes here
	int n;
    cin>>n;
 
    if(n*(n+1)/2 % 2) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        if(n%2){
        
            vector<int> a;
            vector<int> b;
            for(int i=1;i<n+1;i++){
                if(i%4==1 || i%4==2) a.push_back(i);
                else b.push_back(i);
            }
            cout<<a.size()<<endl;
            for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
            cout<<endl<<b.size()<<endl;
            for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
 
 
        }
        else{
            vector<int> a;
            
            vector<int> b;
            for(int i=1;i<n+1;i++){
                if(i%4==1 || i%4==0) a.push_back(i);
                else b.push_back(i);
            }
            cout<<a.size()<<endl;
            for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
            cout<<endl<<b.size()<<endl;
            for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
        }
    }
                    
        
	    
        
 
        
 
	    
	
	return 0;
}