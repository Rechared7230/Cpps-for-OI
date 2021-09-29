#include<iostream>
using namespace std;
int x[10]={6,2,5,5,4,5,5,3,7,6};
int main(){
    int n;
    cin>>n;
    n-=4;
    int a,b,c;
    int ca;
    for(a=0;a<10;a++){
        for(b=0;b<10;b++){
            if(a+b>9){
                ca=x[(a+b)/10]+x[(a+b)%10];
            }
            else ca=x[a+b];
            
        }
    }
    return 0;
}
//Fuck!