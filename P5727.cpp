#include<iostream>
using namespace std;
int main(){
	int a[101];
	int n;
	cin>>n;
	a[0]=n;
	int num=1;
	while(n!=1){
		if(n&1==1){n=n*3+1;}
		else {n/=2;}
		a[num]=n;
		num++;
	}
	a[num]=1;
	for(int i=num-1;i>=0;i--)cout<<a[i]<<" ";
	return 0;
} 
