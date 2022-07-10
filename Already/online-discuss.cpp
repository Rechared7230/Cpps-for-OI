#include<iostream>

using namespace std;
int T;
int n;
int num[50009];
int a[50009][50009];
bool c[50009][50009];
bool ck(int i,int j){
    bool ok=false;
    bool c1=false;
    bool c2=false;
    int nn=0;
    if(num[i]<num[j]){
        for(int k=0;k<num[i];k++){
            int nm=a[i][k];
            if(nn=3)break;
            if(a[i][nm]==true && a[j][nm]==true)ok=true,nn++;
            if(a[i][nm]==false && a[j][nm]==true)c1=true,nn++;
            if(a[i][nm]==true && a[j][nm]==false)c2=true,nn++;
        }
    }
    else{
        for(int k=0;k<num[j];k++){
            int nm=a[j][k];
            if(nn=3)break;
            if(a[i][nm]==true && a[j][nm]==true)ok=true,nn++;
            if(a[i][nm]==false && a[j][nm]==true)c1=true,nn++;
            if(a[i][nm]==true && a[j][nm]==false)c2=true,nn++;
        }   
    }
    return ok&&c1&&c2;
}
int main(){
    ios::sync_with_stdio(false);
    cin>>T;
    while(T--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num[i];
            for(int j=0;j<num[i];j++){
                int nnn;
                cin>>nnn;
                a[i][j]=nnn;
                c[i][nnn]=true;
            }
        }
        bool get=false;
        for(int i=0;i<n-1;i++){
            if(get)break;
            for(int j=i+1;j<n;j++){
                if(get)break;
                if(ck(i,j)){
                    cout<<"YES"<<endl;
                    cout<<i<<" "<<j<<endl;
                    get=true;
                }
            }
        }
        if(!get){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}