#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    string s;
    cin>>s;
    //if(s=="-0")cout<<"-0";
    bool c=false;
    int n=0;
    if(s[0]=='-'){
        cout<<"-";
        for(int i=s.length()-1;i>0;i--){
            if(c){cout<<s[i];n++;continue;}
            if(s[i]!='0' ){c=true;n++;cout<<s[i];}
        }
    }
    else {
        for(int i=s.length()-1;i>=0;i--){
            if(c){cout<<s[i];n++;continue;}
            if(s[i]!='0' ){c=true;n++;cout<<s[i];}
        }
    }
    if(n==0)cout<<"0";
    return 0;
}

