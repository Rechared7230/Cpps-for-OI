#include<iostream>
#include<cstring>
#include<string>
//fuuuuuuuuuuuccccccccck!
using namespace std;
string a;
string it;
int n,m;
int nnn=0;
string s,t;
int sh[400];
unsigned long long ans=0;
int minu=0;
void dfs(int h){
    //judge
    if(h==nnn-1){
        if(it==t)ans++;
        return;
    }
    //front
    char cha=it[0];
    it.erase(0,1);
    minu++;
    dfs(h+1);
    it.insert(0,1,cha);
    minu--;
    //back
    cha=it[sh[h]-minu];
    it.erase(sh[h]-minu,1);
    minu++;
    dfs(h+1);
    it.insert(sh[h]-minu,1,cha);
    minu--;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s>>t;
        for(int i=0;i<n;i++){
            if(s[i]!='-')a+=s[i];
            else{
                sh[nnn]=i-1;
                nnn++;
            }
        }
        it=a;
        dfs(0);
        cout<<ans<<endl;
    }
    return 0;
}