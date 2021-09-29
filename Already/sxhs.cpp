#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    for(a=1;a<=9;a++){
        for(b=0;b<=9;b++){
            for(c=0;c<=9;c++){
                if(a*100+b*10+c==a*a*a+b*b*b+c*c*c)cout<<a<<b<<c<<endl;
            }
        }
    }
    // int num;
    // for(int i=0;i<=999;i++){
    //     a=i/100;
    //     b=i/10-a*10;
    //     c=i%10;
    //     if(i==a*a*a+b*b*b+c*c*c)cout<<i<<endl;
    // }
    return 0;
}