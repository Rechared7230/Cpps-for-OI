#include<iostream>
using namespace std;
//int a[9]={1,2,3,4,5,6,7,8,9};
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool check=false;
    for(int i=1;i<10;i++){
        for(int j=1;j<10&&j!=i;j++){
            for(int k=1;k<10&&k!=i&&k!=j;k++){
                int n[9]={0,0,0,0,0,0,0,0,0};
                int A,B,C;
                A=i*100+j*10+k;
                B=A*b/a;
                C=A*c/a;
                if(B>999||C>999)continue;
                n[i]=1;n[j]=1;n[k]=1;
                n[B/100]++;
                n[B/10-(B/100)*10]++;
                n[B%10]++;
                n[C/100]++;
                n[C/10-(C/100)*10]++;
                n[C%10]++;
                bool ck=true;
                for(int x=0;x<9;x++){
                    if(n[x]>=2)ck=false;
                    
                }
                if(ck){
                    cout<<A<<" "<<B<<" "<<C<<"\n";
                    check=true;
                }
            }
        }
    }
    if(!check)cout<<"No!!!";
    return 0;
}