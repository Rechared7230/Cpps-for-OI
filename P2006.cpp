#include<iostream>

using namespace std;
//int a[30005],b[30005];
int main(){
	int k,m,n;
	cin>>k>>m>>n;
	int num=0;
	int a,b;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		if(a==0){num++;cout<<i+1<<" ";continue;}
		if(b==0)continue;
		int cs=k/a;
		if(cs*b>=n){num++;cout<<i+1<<" ";}
	}
	if(num==0)cout<<-1;
	//else cout<<-1;
	return 0;
}
