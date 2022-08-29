#include<iostream>

using namespace std;
unsigned long long ans=0;
unsigned long long a[34];
bool b[65];
unsigned long long aa=0;
unsigned long long f(unsigned long long n){
	int tot=0;
	while(n>0){
		b[++tot]=n&1;
		n>>1;
	}
	aa=0;
	for(int i=1;i<=tot;i++){
		if(b[i])aa^=a[i];
	}
	return aa;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<(1<<n)-1;i++){
		ans^=(f((unsigned long long)i)*((unsigned long long)i));
	}
	cout<<ans;
	return 0;
}
