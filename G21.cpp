#include<iostream>
#include<cmath>

using namespace std;


int n,m;
int ans=0;


bool check(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)return false;
	}
	return true;
}
void f(){
	for(int i=n;i<=m;i++){
		if(check(i))ans++;
	}
	
}

int main(){
	cin>>n>>m;
	if(n<=2)ans=1,n=3;
	f();
	cout<<ans;
	return 0;
}
