#include<bits/stdc++.h>
using namespace std;
#define long double double
double a[3];
bool cmp(double a,double b){
	return a>b;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	for(int i=0;i<3;i++)cin>>a[i];
	sort(a,a+3,cmp);
	double d;

	double ans;
	d=max(a[0]-a[1]-a[2],0.0);
	ans=(d*d-a[0]*a[0]-a[1]*a[1]-a[2]*a[2])/2.0;
	cout<<fixed<<setprecision(1)<<ans;
	
	return 0;
}

