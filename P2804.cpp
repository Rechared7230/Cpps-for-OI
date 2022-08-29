#include<iostream>

using namespace std;

int n,m;
int c[100009];
int a[5090];
unsigned long long ans=0;
int main(){
	cin>>n;
	int minn=0x3f3f3f3f;
	for(int i=0;i<n;i++){
		cin>>c[i];
		c[i]-=m;
		if(i==0){minn=min(minn,c[i]);continue;}
		else c[i]+=c[i-1];
		minn=min(minn,c[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(c[j]-c[i]>=0)ans++;
		}
	}
	cout<<ans;
	
	
	return 0;
} 
