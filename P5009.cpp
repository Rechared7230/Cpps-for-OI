#include<iostream>
using namespace std;
struct dl{
    int v,a,b;//c=a*b
}le[200007];
int qz[200007]={0};
void f1();
void f2();
void f3();
void f4();
int main(){
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    //int a,b;
    for(int i=1;i<=n;i++){
        cin>>le[i].v;
        cin>>le[i].a>>le[i].b;
        qz[i]=qz[i-1]+le[i].v;
        //le[i].c=a*b;
    }
    
    int cz;
    int t1,t2;
    for(int i=0;i<m;i++){
        cin>>cz;
        cin>>t2;
        for(int j=0;j<t2-t1;j++){
            for(int k=1;k<=n;k++){
                le[]
            }
        }
        if(cz==1)f1();
        else if(cz==2)f2();
        else if(cz==3)f3();
        else if(cz==4)f4();
        t1=t2;
    }
    return 0;
}
void f1(){
    int x,y;
    cout<<qz[y]-qz[x];
}