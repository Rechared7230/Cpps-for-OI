#include<iostream>

using namespace std;

int k,s1,s2,s3;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	bool find=false;
	cin>>k;
	for(int i=10000;i<=30000;i++){
		s1=i/100;
		s2=(i%10000)/10;
		s3=i%1000;
		if(s1%k==0 && s2%k==0 && s3%k==0){
			cout<<i<<endl;
			find=true;
		}
	}
	if(!find)cout<<"No";
	return 0;
}

