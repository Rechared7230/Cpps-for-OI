#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>

using namespace std;
int w=0;
bool check;
char c;
int l;
int sta[100];
char bls[100];
string p1="Yes",p2="No",p3="ERR";
void cintime(){
    string s;
    cin>>s;
    if(s[2]=='1'){w=0;}
    else if(s[2]=='n'){
        int i=3;
        while(s[i]>='0'&&s[i]<='9'){
            w=w*10+s[i];
        }
    }
}
void functi(){
    int nu=0,mxn=0;
    bool ck=1;
    for(int i=0;i<l;i++){
        cin>>c;
        if(c=='F'){
            char bl;
            cin>>bl;
            for(int i=0;i<nu;i++){
                if(bl==bls[i]){
                    cout<<p3<<endl;
                    return;
                }
            }
            bls[nu+1]=bl;
            char n1,n2;
            cin>>n1>>n2;
            if(n1=='n'){
                ck=false;
                continue;
            }
        }
        else if(c=='E'){}
    }
}
int main(){
    ios::sync_with_stdio(false);
    freopen("time.in","r",stdin);
    freopen("time.out","w",stdout);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){

        cin>>l;
        cintime();
    }
    return 0;
}