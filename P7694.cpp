#include<iostream>
#include<cstring>

using namespace std;

string s;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>s;
	cout<<s[0];
	for(int i=1;i<s.length();i++){
		if(s[i-1]=='-')cout<<s[i];
	}
	
	return 0;
}

