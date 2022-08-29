#include<iostream>

using namespace std;

int n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			
			cout<<n/i;
			return 0;
		}
	}
	
	return 0;
}

