#include <bits/stdc++.h>
using namespace std;
 
int n,m;
 
vector<vector<int>> g;
vector<int> parent;
vector<bool> vis;
 
void bfs(int s){
 
    vis[s]=true;
    queue<int> q;
    q.push(s);
    
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v: g[u]){
            if(!vis[v]){
                vis[v]=true;
                parent[v]=u;
                q.push(v);
            }
        }
    }
 
}
 
 
 
int main(){
 
    cin>>n>>m;
    g.resize(n+1);
    vis.resize(n+1);
    parent.resize(n+1);
 
    for(int i=0;i<=n;i++) parent[i]=-1;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
 
    bfs(1);
 
    if(parent[n]==-1) cout<<"IMPOSSIBLE"<<endl;
    else{
    int t=n;
 
    stack<int> st;
    while(t!=-1){
        st.push(t);
        t=parent[t];
    }
 
    cout<<st.size()<<endl;
 
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
 
    cout<<endl;
 
    }
 
 
 
    return 0;
}
