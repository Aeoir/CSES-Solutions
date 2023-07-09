    #include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
 
using namespace std;
 
 
 
int32_t main() {
	// your code goes here
	
    string s;
    cin>>s;
 
    int n=s.size();
    map<char,int> m;
 
    int f=0;
 
    for(int i =0;i<n;i++){
        if(m.find(s[i])==m.end()) m[s[i]]=1;
        else{
            m[s[i]]+=1;
        }
    }
    
    for(auto&x: m){
        if(x.second%2==1){
            f+=1;
        }
    }
 
    if(f>1) cout<<"NO SOLUTION"<<endl;
    else{
        if(n%2==0 && f==1) cout<<"NO SOLUTION"<<endl;
        else{
 
            string ans="";
            string c;
            for(auto&x :m){
                int k=x.second;
                if(k%2!=1){
                    while(k!=x.second/2){
                        ans+=x.first;
                        k--;
                    }
                }
                else{
                    while(k>1){
                        ans+=x.first;
                        k-=2;
                    }
                    c=x.first;
                }
                
            }
            string a2=ans;
            ans+=c;
            reverse(ans.begin(),ans.end());
            a2+=ans;
 
            cout<<a2<<endl;
 
 
 
 
        }
    }
    
    
                    
        
	    
        
 
        
 
	    
	
	return 0;
}