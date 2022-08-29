#include<iostream>
#include<cstring>

using namespace std;

string s;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>s;
	int s1=-1,s2=-1,e1=-1,e2=-1;	
	int num=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='['){
			if(s1<0){
				s1=i;
				break;
			}
		}
	}
	for(int i=s1+1;i<s.length();i++){
		if(s[i]==':'){
			s2=i;
			break;
		}
	}
	for(int i=s.length()-1;i>s2;i--){
		if(s[i]==']'){
			e2=i;
			break;
		}
	}
	for(int i=e2-1;i>s2;i--){
		if(s[i]==':'){
			e1=i;
			break;
		}
	}
	for(int i=s2+1;i<e1;i++){
		if(s[i]=='|')num++;
	}
	if(s1<0||s2<0||e1<0||e2<0){
		cout<<-1;
		return 0;
	}
	cout<<4+num;
	
	return 0;
}

