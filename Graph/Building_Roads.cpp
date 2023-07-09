#include <bits/stdc++.h>
using namespace std;
vector<bool> vis;
 
vector<vector<int>> g;
int n,m;
 
 
void dfs(int u){
    vis[u]=true;
    for(auto x: g[u]){
        if(!vis[x]) dfs(x);
    }
}
 
vector<int> arr;
 
int ans=0;
void cc (){
    
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            ans++;
            arr.push_back(i);
            dfs(i);
 
        }
    }
    
}
 
 
 
int main(){
    cin>>n>>m;
    g.resize(n+1);
    vis.resize(n+1);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
 
    cc();
    cout<<ans-1<<endl;
    arr.resize(ans);
    int l=arr[0];
    for(int i=1;i<ans;i++){
        cout<<l<<" "<<arr[i]<<endl;
        l=arr[i];
    }
 
 
 
 
 
    return 0;
}
