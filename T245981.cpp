#include<iostream>

using namespace std;

unsigned long long z,k;
unsigned long long ans;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>z>>k;
	if(k%z==0 && k>z)ans=z + (k/z)*z;
	else ans=z<<1 + (k/z)*z; 
	cout<<ans;
	
	return 0;
}

