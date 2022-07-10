#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;
int a[1000000];
unsigned long long cf(unsigned long long n){
    unsigned long long ite=0;
    while(n>0){
        a[ite]=n%10;
        ite++;
        n/=10;
    }
    return ite;
}
unsigned long long reverse(unsigned long long n){
    unsigned long long an=cf(n);
    unsigned long long ans=0;
    for(int i=0;i<an;i++){
        ans*=10;
        ans+=a[i];
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int nnn=0;nnn<t;nnn++){
        string s;
        cin>>s;
        if(s.length()<=3){
            unsigned long long n=0;
            for(int i=0;i<s.length();i++){
                n*=10;
                n+=s[i]-'1'+1;
            }
            unsigned long long ans=1;
            while(reverse(ans)<=n)ans++;
            cout<<ans-1<<endl;
            continue;
        }
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
            int num=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='9'){
                    num++;
                }
                else break;
            }
            if(s.length()==num+1){
                s[s.length()-1]++;
                cout<<s[s.length()-1];
                for(int i=1;i<num;i++)cout<<9;
                cout<<8<<endl;
                continue;
            }
            bool allzero=true;
            for(int i=num+1;i<s.length();i++){
                if(s[i]!='0'){allzero=false;break;}
            }
            if(allzero){
                cout<<1;
                for(int i=0;i<s.length()-2-num;i++)cout<<0;
                cout<<s[num];
                for(int i=0;i<num-1;i++)cout<<9;
                cout<<8<<endl;
            }
            else{
                cout<<1;
                s[num]++;
                for(int i=0;i<s.length()-2-num;i++)cout<<0;
                cout<<s[num];
                for(int i=0;i<num-1;i++)cout<<9;
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