#include<iostream>
#include<cmath>
using namespace std;

bool v[2000000009];
int a[1009];
int n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
//	int a,b;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=1;i<n;i++)v[abs(a[i]-a[i-1])]=true;
	int num=0;
	for(int i=1;i<n;i++)if(!v[i]){
		cout<<"Not jolly";
		return 0;
	}
	cout<<"Jolly";
	return 0;
}

