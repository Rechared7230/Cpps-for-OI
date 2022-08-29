#include<iostream>
#include<vector>

using namespace std;
//#define g[x][i] son
int n;
vector<int>g[100009];
unsigned long long f[100009][3];

void dfs(int x,int fa){
	f[x][0]=1;
	f[x][1]=0x3f3f3f3f;
	unsigned long long all=0;
	int add=0;
	for(int i=0;i<g[x].size();i++){
		if(g[x][i]==fa)continue;
		dfs(g[x][i],x);
		
		f[x][0]+=min(f[g[x][i]][0],min(f[g[x][i]][1],f[g[x][i]][2]));
		f[x][2]+=f[g[x][i]][1];
	}
	if(g[x].size()==1 && x!=1)return;
	int ccmin=0x3f3f3f3f,ccnum;
	for(int i=0;i<g[x].size();i++){
		if(f[g[x][i]][0]>f[g[x][i]][1]){
			all+=f[g[x][i]][1];
			if(f[g[x][i]][0]-f[g[x][i]][1]<ccmin)ccmin=f[g[x][i]][0]-f[g[x][i]][1],ccnum=g[x][i];
		}
		else {
			all+=f[g[x][i]][0];
			add++;
		}
	}
	if(add==0){
		all-=f[ccnum][1];
		all+=f[ccnum][0];
	}
	f[x][1]=all;
}

int main(){
	cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	dfs(1,1);
	cout<<min(f[1][0],f[1][1]);
	return 0;
}

