#include<iostream>

using namespace std;

int n,m;
int a[3009];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	unsigned long long ans=1000000009;;
	for(int i=0;i<n-m+1;i++){
		unsigned long long sum=0;
		for(int j=0;j<m;j++)sum+=a[i+j];
		ans=min(ans,sum);
	}
	cout<<ans;
	return 0;
}

