#include<iostream>

using namespace std;

int n;
int a[30009];
int f[30009][3];
unsigned long long ans=0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
//	f[1][1]=1;
	for(int i=1;i<=n;i++){
		f[i][1]=1;
		for(int j=1;j<i;j++){
			if(a[i]>a[j]){
				f[i][2]+=f[j][1];
				f[i][3]+=f[j][2];
			}
		}
	}
	for(int i=1;i<=n;i++){
		ans+=f[i][3];
	}
	cout<<ans;
	
	
	return 0;
}

