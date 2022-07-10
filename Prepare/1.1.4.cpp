#include<iostream>

/*FREOPEN()*/

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2){
            cout<<"continue\n";
            continue;
        }
        else if(i==4){
            cout<<"break\n";
            break;
        }
        cout<<"Akyuu\n";
    }
    cout<<"for is out0\n";
        
    // int a=0;
    // while(a<n){
    //     cout<<"Hieda\n";
    //     a++;
    // }
    // int b=0;
    // do{
    //     cout<<"Akyuu\n";
    //     b++;
    // }while(b<n);
    return 0;
}
/*
    for(register int i=0;i<n;i++){......}
*/
/*
    break
    continue
*/