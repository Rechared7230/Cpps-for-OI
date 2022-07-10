#include<iostream>
#include<stack>
#include<string>
#include<cstring>
#include<cmath>

using namespace std;
bool v[26];
stack<int>s;
string fzdc;
void solve(){
    memset(v,false,sizeof(v));
    bool right=true;
    int n;
    cin>>fzdc;
    int afz=0,fz=0,cfz=0;;
    if(fzdc[2]=='1')afz=0;
    else afz=fzdc[4]-'0';
    while(n--){
        char c;
        cin>>c;
        if(c=='F'){
            s.push(1);
            cfz++;
            char bl;
            cin>>bl;
            int pos=bl-'a'+1;
            if(v[pos]){
                cout<<"ERR\n";
                return;
            }
            else{v[pos]=true;}
            string a,b;
            cin>>a>>b;
            if(a[0]=='n'){
                if(b[0]=='n'){
                    continue;
                }
                else{
                    int a=s.size();
                    bool ck=false;
                    while(!ck){
                        char c1;
                        cin>>c1;
                        string cac;
                        if(c1=='F'){
                            //position!!!
                        }
                    }
                }
            }
            else{
                if(b[0]=='n'){
                    fz=max(fz,cfz);
                }
                else{
                    continue;
                }
            }
        }
        else if(c=='E'){
            if(!s.empty()){
                s.pop();
                cfz--;
            }
            else {cout<<"ERR\n";return;}
        }
    }
    if(!s.empty()){cout<<"ERR\n";return;}
    if(fz==afz)cout<<"Yes\n";
    else cout<<"No\n";
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}