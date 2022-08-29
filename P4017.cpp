#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

using namespace std;

int n,m;
vector<int>g[5009],g1[5009];
bool vis[5009];
int maxindex=0;
queue<int >r;

void dfs(int x,int index){
	if(index>maxindex)maxindex=index;
	for(int i=0;i<g[x].size();i++){
		dfs(g[x][i],index+1);
	}
}

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		g1[b].push_back(a);
		g[a].push_back(b);
	}
	
	for(int i=1;i<=n;i++){
		if(g1[i].size()==0){r.push(i);}
	}
	
	while(!r.empty()){
		dfs(r.front(),1);
		r.pop();
	}
	cout<<maxindex;
	
	return 0;
}
