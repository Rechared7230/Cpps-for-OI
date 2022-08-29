#include<iostream>
#include<cstring>
#include<string>
#include<cmath>

using namespace std;
int mp[21][21];
bool vis[21][21];
int n,m,a,b;
unsigned long long ans=0;

int main(){
	cin>>n>>m>>a>>b;
	memset(vis,false,sizeof(vis));
	memset(mp,0,sizeof(mp));
//	dfs(n,m);
mp[0][0]=1;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(mp[i][j]>0)continue;
			int dist=abs(i-a)+abs(j-b);
			if(i==0 && dist!=3 && i!=n && j!=m){
				mp[i][j]=mp[i][j-1];continue;
			}
			if(j==0 && dist!=3 && i!=n && j!=m){
				mp[i][j]=mp[i-1][j];continue;
			}
			if(dist!=3 && i!=n && j!=m){
				mp[i][j]=mp[i-1][j]+mp[i][j-1];continue;
			}
		}
	}
	cout<<mp[n][m];
	return 0;
} 
