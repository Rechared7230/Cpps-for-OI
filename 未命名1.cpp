#include<iostream>
#include<cstring>
#include<string>

using namespace std;
string s;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	if(k==2)m-=2;
	for(int i=0;i<m/2;i++){
		s+="lr";
	}
	#define num (n-m)
	int a=0;
	for(int i=0;i<num;i++){
		if(a<k){
			a++;
			s+='l';
		}
		else {
			a=0;
			s+='r';
		}
	}
	cout<<s;
	
	return 0;
}
