#include<iostream>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

int n,m;
vector<int>g[1000009];
int v[1000009];
bool vis[1000009];

int aim=0;
void dfs(int x){
	v[x]=aim;
	for(int i=0;i<g[x].size();i++){
		if(!vis[g[x][i]]){
			vis[g[x][i]]=true;
			dfs(g[x][i]);
		}
	}
	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>b>>a;
		g[a].push_back(b);
	}
	for(int i=n;i>0;i--){
		aim=i;
		if(!vis[i]){
			vis[i]=true;
			dfs(i);
		}
	}
	for(int i=1;i<=n;i++)cout<<v[i]<<" ";
	return 0;
}
