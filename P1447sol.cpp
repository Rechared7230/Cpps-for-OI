#include<iostream>

using namespace std;

unsigned long long ans=0;
int n,m;
unsigned long long num[100009];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	if(n>m)swap(n,m);
	for(int i=n;i>0;i--){
		num[i]=(unsigned long long)(n/i)*(m/i);
		for(int j=(i<<1);j<=n;j+=i){
			num[i]-=num[j];
		}
		ans+=((i<<1)-1)*num[i];
	}
	cout<<ans;
	return 0;
}

