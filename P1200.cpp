#include<iostream>
#include<cstring>

using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string s,q;
	int a=1,b=1;	
	cin>>s;
	cin>>q;
	for(int i=0;i<q.length();i++){
		a*=q[i]-'A'+1;
		a%=47;
	}
	for(int i=0;i<s.length();i++){
		b*=s[i]-'A'+1;
		b%=47;
	}
	
	if(a==b)cout<<"GO";
	else cout<<"STAY";
//	if()
	return 0;
}

