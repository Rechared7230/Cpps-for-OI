#include<iostream>

using namespace std;

bool v[2000009];
int T;
double a;
int t;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>a>>t;
		for(int j=1;j<=t;j++)v[(int)(a*(double)j)]^=1;
	}
	for(int i=1;i<2000000;i++){
		if(v[i]){
			cout<<i;
			return 0;
		}
	}
	
	return 0;
}

