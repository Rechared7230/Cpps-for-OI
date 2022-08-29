#include<iostream>

using namespace std;

int n,p; 
int ll,gg;
int dx[6]={0,1,1,0,-1,-1};
int dy[6]={1,1,0,-1,-1,0};
struct idea{
//	int tll,tlg,ll,lg,bll,blg,brl,brg,rl,rg,trl,trg;
	int d[2][6];
}a[109];
bool f[102][21][21][102][102];

int main(){
	cin>>n>>p;
	for(int i=0;i<n;i++){
//		cin>>a[i].tll>>a[i].tlg>>a[i].ll>>a[i].lg>>a[i].bll>>a[i].blg>>a[i].brl>>a[i].brg>>a[i].rl>>a[i].rg>>a[i].trl>>a[i].trg;
		for(int j=0;j<6;j++){
			cin>>a[i].d[0][j]>>a[i].d[1][j];
		}
	}
	cin>>ll>>gg;
	f[0][9][9][0][0]=true;
	for(int i=0;i<n-1;i++){
		for(int j=9-i;j<=11+i;i++){
			for(int k=9-i;k<=11+k;k++){
				for(int l=0;l<p;l++){
					for(int g=0;g<p;g++){
						for(int m=0;m<6;m++){
							f[i+1][j+dx[m]][k+dy[m]][(l+a[i+1].d[0][m])%p][(g+a[i+1].d[1][m])%p]|=f[i][j][k][l][g];
						}
					}
				}
			}
		}
	}
	if(f[n-1][9][9][ll][gg]){
		cout<<"Chaotic Evil";
	}
	else cout<<"Not a true problem setter";
	return 0;
}

