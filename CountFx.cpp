#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    cout<<n<<m;
    Sleep(10000);
    int zfx=0,cfx=0;
    for(int i=0;i<n;i++){
        for(int j=0;i<m;j++){
            for(int p=1;p<=n;p++){
                for(int q=1;q<=m;q++){
                    if(p-i==q-j){
                        zfx=zfx+1;
                    }
                    else {cfx+=1;}
                    cout<<zfx<<" "<<cfx<<endl;;
                }
            }
        }
    }
    
    return 0;
}