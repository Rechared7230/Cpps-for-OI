#include<iostream>
#include<cstring>

using namespace std;

string s;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>s;
	int b=0,g=0;
	for(int i=0;i<s.length()-3;i++){
	
		if(s[i]=='g' || s[i+1]=='i' || s[i+2]=='r' || s[i+3]=='l')g++;
	}
	for(int i=0;i<s.length()-2;i++)	if(s[i]=='b' || s[i+1]=='o' || s[i+2]=='y')b++;
	cout<<b<<endl<<g;
	
	return 0;
}

