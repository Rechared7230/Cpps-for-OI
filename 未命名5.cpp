#include<iostream>

using namespace std;
int f[2000009];
int ans[2000009];
int n;
int as(int x){
	bool z=false;
	for(int i=2;i*i<=n;i++){
		if(x%i==0)return i;
	}
	return x;
}

int main(){
	cin>>n;
	f[1]=ans[1]=1;
	f[2]=ans[2]=2;
	f[3]=ans[3]=3;
	f[4]=ans[4]=3;
	f[5]=ans[5]=5;
	for(int i=6;i<=2000000;i++){
		int a=as(i);
//		cout<<endl<<"("<<a<<")"<<endl;
		if(a==i){
			f[i]=i;
			ans[i]=max(ans[i-1],f[i]);
			continue;
		}
		f[i]=f[i/a]+a-1;
		ans[i]=max(ans[i-1],f[i]);
	}
	for(int i=0;i<n;i++){
		int req;
		cin>>req;
		cout<<ans[req]<<" ";
	}

	return 0;
}

