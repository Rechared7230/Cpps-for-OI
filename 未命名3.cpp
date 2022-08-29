#include<iostream>
#include<cstring>
using namespace std;

int n,a,b;
unsigned long long ans=0;
int main(){
	cin>>n>>a>>b;
	for(int i=0;i<n;i++){
		string nam;
		string text;
		cin>>nam>>text;
		if(text=="/oh")ans+=a;
		if(text=="/hsh")ans+=b;
	}
	cout<<ans;
	return 0;
}

