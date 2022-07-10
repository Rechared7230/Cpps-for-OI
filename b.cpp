#include<iostream>
#include<cstring>

using namespace std;
string s;
bool a=false;
int main(){
    cin>>s;
    if(s[0]=='-')cout<<"-";
    for(int i=s.length()-1;i>=0;i--){
        if(~a && s[i]!='0')a=true;
        if(a && s[i]!='-')cout<<s[i];
    }
    return 0;
}