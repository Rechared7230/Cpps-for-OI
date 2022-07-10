#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int nnn=0;nnn<t;nnn++){
        string s;
        cin>>s;
        
        if(s.length()==1){
            if(s[0]=='9'){
                cout<<10<<endl;
                continue;
            }
            cout<<s[0]<<endl;
            continue;
        }
        if(s[0]=='9'){
            bool allnine=true;
            for(int i=0;i<s.length();i++){
                if(s[i]!='9'){allnine=false;break;}
            }
            if(allnine){
                cout<<1;
                for(int i=0;i<s.length();i++)cout<<0;
                cout<<endl;
                continue;
            }
            if(s[s.length()-1]=='0'){
                bool partnine=true;
                for(int i=1;i<s.length()-1;i++){
                    if(s[i]!='9')partnine=false;
                }
                if(partnine){
                    cout<<1;
                    for(int i=1;i<s.length()-1;i++)cout<<9;
                    cout<<8<<endl;
                    continue;
                }
            }
            bool allzero=true;
            for(int i=1;i<s.length();i++){
                if(s[i]!='0'){allzero=false;break;}
            }
            if(~allzero){
                cout<<1;
                for(int i=0;i<s.length()-3;i++)cout<<0;
                s[1]++;
                cout<<s[1];
                cout<<8<<endl;
            }
            else{
                cout<<1;
                for(int i=0;i<s.length()-2;i++)cout<<0;
                cout<<8<<endl;
            }
        }
        else{
            bool allzero=true;
            for(int i=1;i<s.length();i++){
                if(s[i]!='0')allzero=false;
            }
            if(allzero){
                cout<<1;
                for(int i=0;i<s.length()-2;i++)cout<<0;
                cout<<s[0]-'1'<<endl;
                continue;
            }
            cout<<"1";
            for(int i=0;i<s.length()-2;i++){
                cout<<0;
            }
            cout<<s[0]<<endl;
        }
    }
    return 0;
}