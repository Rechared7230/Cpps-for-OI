#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int r,c;
int a[109][109];
int v[109][109];
int cx[4]={0,0,1,-1};
int cy[4]={1,-1,0,0};
int ans=0;

int dfs(int x,int y){
	if(v[x][y]>0)return v[x][y];
//	if(a[x-1][y]>=a[x][y] && a[x+1][y]>=a[x][y] && a[x][y-1]>=a[x][y] && a[x][y+1]>=a[x][y] )return 1;
	for(int i=0;i<4;i++){
		if(x+cx[i]>0 && y+cy[i]>0 && x+cx[i]<=r && y+cy[i] <=c){
			if(a[x+cx[i]][y+cy[i]]<a[x][y])v[x][y]=max(v[x][y],dfs(x+cx[i],y+cy[i])+1);
		}
	}
	return v[x][y];
}

int main(){
	memset(a,0x3f,sizeof(a));
//	memset(v,1,sizeof(v));
	cin>>r>>c;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[r][c];
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			ans=max(ans,dfs(i,j));
		}
	}
	cout<<ans+1;
	return 0;
}
