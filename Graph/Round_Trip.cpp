#include <bits/stdc++.h>
 
using namespace std;
 
 
int n,m;
int a1,a2;
vector<vector<int>> g;
vector<int> vis;
vector<int> parent;
 
 
bool dfs(int u,int p){
    vis[u]=true;
    parent[u]=p;
    
    for(auto v: g[u]){
        if(v==p) continue;
        if(vis[v]){
            a1=v;
            a2=u;
            return true;
        }
        else{
            if(dfs(v,u)) return true;
        }
 
    }
    return false;
}
 
 
bool cc(){
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(dfs(i,-1)) return true;
        }
    }
 
    return false;
}
 
int main(){
 
    cin>>n>>m;
    g.resize(n+1);
    vis.resize(n+1);
    parent.resize(n+1);
 
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    //cout<<"xsjxj"<<endl;
    if(!cc()) cout<<"IMPOSSIBLE"<<endl;
    else{
        //cout<<"psps"<<endl;
 
        vector<int> ans;
        
        int t=a2;
        ans.push_back(a2);
        while(t!=a1){
            ans.push_back(parent[t]);
            t=parent[t];
        }
        ans.push_back(a2);
        cout<<ans.size()<<endl;
        for(int x: ans) cout<<x<<" ";
        cout<<endl;
    }
 
 
 
 
 
    return 0;
}
