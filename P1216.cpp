#include<iostream>

using namespace std;

int a[1009][1009];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
		}
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
//			cin>>a[i][j];
			a[i][j]=max(a[i-1][j]+a[i][j],a[i-1][j-1]+a[i][j]);
		}
	}
	int maxn=0;
	for(int i=1;i<=n;i++)maxn=max(maxn,a[n][i]);
	cout<<maxn;
	return 0;
}
