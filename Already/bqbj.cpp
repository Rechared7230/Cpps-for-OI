#include<iostream>
using namespace std;
int main(){
    for(int a=0;a<21;a++){
        for(int b=0;b<=(100-5*a)/3;b++){
            int z=100-5*a-3*b;
            cout<<a<<" "<<b<<" "<<z*3<<"\n";
        }
    }
    return 0;
}