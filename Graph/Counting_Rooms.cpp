#include<bits/stdc++.h>
//#define int long long
 
 
using namespace std;
 
 
int n,m;
 
vector<vector<bool>> vis;
 
 
 
bool check(int r, int c){
    if(r<0 || r>=n || c<0 || c>=m) return false;
    if(vis[r][c]) return false;
 
    return true;
}    
 
void dfs(int r, int c){
    vector<pair<int,int>> move={{-1,0},{1,0},{0,-1},{0,1}};
    
    vis[r][c]=true;
    for(auto x: move){
        if(check(r+x.first, c+x.second)) dfs(r+x.first, c+x.second);
    }
    
 
}
 
 
 
int main() {
    
    cin>>n>>m;
	vis.resize(n);
 
	for(int i = 0; i < n; ++i)
	{
		vis[i].resize(m);
	}    
 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;
            cin>>c;
            if(c=='#') vis[i][j]=true;
        }
    }
 
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
 
            if(!vis[i][j]){
                dfs(i,j);
                ans++;
            }
        }
    }
    
    cout<<ans<<endl;
	return 0;
}
