#include<iostream>

using namespace std;

int n,c;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	int nu=0;
	int qzh=0;
	while(qzh<n*n){
		int a;
		cin>>a;
		qzh+=a;
		for(int i=0;i<a;i++){
			c++;
			cout<<nu;
			if(c%n==0){
				c=0;
				cout<<endl;
			}
			
		}
		nu^=1;
	}	
	
	return 0;
}

