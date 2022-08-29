#include<iostream>

using namespace std;

int n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	int a=n/5;
	for(int i=a;i>=0;i--){
		if((n-i*5)%3==0){
			cout<<i+(n-i*5)/3;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}

