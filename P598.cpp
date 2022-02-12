#include<iostream>
#include<cstring>
#include<cmath>
#include<string>

using namespace std;
int num[26];
bool w[26];

int main(){
    memset(num,0,sizeof(num));
    string s;
    while(cin>>s){
        for(int i=0;i<s.length();i++){
            int a=s[i]-'A';
            if(a>=0&&a<26){
                num[a]++;
            }
        }
    }
    int m;
    for(int i=0;i<26;i++)m=max(m,num[i]);
    m++;
    while(m){
        for(int i=0;i<26;i++){
            if(m==num[i])w[i]=1;
            if(w[i]&&i!=25)cout<<"* ";
            else if(w[i]&&i==25)cout<<"* ";
            else cout<<"  ";
        }
        m--;
        cout<<endl;
    }
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
    return 0;
}