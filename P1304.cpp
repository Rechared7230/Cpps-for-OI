#include<iostream>

using namespace std;

int nn;

bool p[10009];

void as(){
	for(int i=2;i<=10000;i++){
		if(!p[i]){
			for(int j=i+i;j<=10000;j+=i){
				p[j]=true;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	as();
	cin>>nn;
	for(int i=4;i<=nn;i+=2){
		for(int j=2;j<=i;j++){
			if(!p[j] && !p[i-j]){
				cout<<i<<"="<<j<<"+"<<i-j<<endl;
				break;
			}
		}
	}
	
	return 0;
}

