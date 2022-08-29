#include<iostream>

using namespace std;

int ans;
int a[12];
int qzh;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	for(int i=0;i<12;i++){
		int n;
		cin>>n;
		a[i]=300-n;
		qzh+=a[i];
		if(qzh<0){
			cout<<-(i+1);
			return 0;
		}
		if(qzh>100){
			ans+=(qzh/100)*100;		
			qzh%=100;
		}
		
	}
	cout<<qzh+ans*1.2;
	return 0;
}

