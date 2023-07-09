#include <bits/stdc++.h>
 
using namespace std;
 
vector<vector<pair<int,int>>> path;
vector<vector<bool>> vis;
int sx,sy,ex,ey;
int n,m;
 
 
bool check(int r,int c){
    if(r<0 || r>=n || c<0 || c>=m) return false;
    if(vis[r][c]) return false;
    return true;
}
 
void bfs(int r, int c){
    
    vector<pair<int,int>> moves={{-1,0},{1,0},{0,-1},{0,1}};
 
    queue<pair<int,int>> q;
    q.push({r,c});
    
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
 
        for(auto m: moves){
            int mx=m.first;
            int my=m.second;
 
            if(check(x+mx,y+my)){
                q.push({x+mx,y+my});
                vis[x+mx][y+my]=true;
                path[x+mx][y+my]={mx,my};
            }
        }
    }
    
}
 
 
 
int main(){
    cin>>n>>m;
 
	path.resize(n);
	vis.resize(n);
	for(int i = 0; i < n; ++i)
	{
		path[i].resize(m);
		vis[i].resize(m);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			path[i][j] = {-1,-1};
			char c; cin >> c;
			if(c == '#')
			{
				vis[i][j] = true;
			}
			if(c == 'A')
			{
				sx = i; sy = j;
			}
			if(c == 'B')
			{
				ex = i; ey = j;
			}
		}
	}
	bfs(sx,sy);
 
	if(!vis[ex][ey])
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
 
	vector<pair<int,int>> ans;
	pair<int,int> end = {ex,ey};
 
	while(end.first != sx or end.second != sy)
	{
		ans.push_back(path[end.first][end.second]);
		end.first -= ans.back().first;
		end.second -= ans.back().second;	
	}
 
	reverse(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for(auto c: ans)
	{
		if(c.first == 1 and c.second ==0)
		{
			cout << 'D';
		}
		else if(c.first == -1 and c.second ==0)
		{
			cout << 'U';
		}
		else if(c.first == 0 and c.second == 1)
		{
			cout << 'R';
		}
		else if(c.first == 0 and c.second == -1)
		{
			cout << 'L';
		}
	}
 
 
 
 
 
 
 
 
    return 0;
}