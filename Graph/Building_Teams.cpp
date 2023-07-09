#include <bits/stdc++.h>
using namespace std;
 
int n,m;
 
vector<vector<int>> g;
vector<bool> vis;
vector<int> c;
 
bool dfs(int u,int col,int parent){
    vis[u]=true;
    c[u]=col;
 
    for(auto v: g[u]){
        if(v==parent) continue;
        if(c[v]==0){
            if(!dfs(v,c[u]^3,u)) return false;
        }
        if(c[v]==c[u]) return false;
    }
 
    return true;
}
 
 
bool cc(){
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(!dfs(i,1,-1)) return false;
        }
    }
 
    return true;
}
 
 
int main(){
    cin>>n>>m;
    g.resize(n+1);
    vis.resize(n+1);
    c.resize(n+1);
 
    for(int i=1;i<=m;++i){
        int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
 
    bool ans=cc();
    if(!ans){
        cout<<"IMPOSSIBLE"<<endl;
    }
 
    else{
        for(int i=1;i<=n;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
 
    
 
 
 
    return 0;
}