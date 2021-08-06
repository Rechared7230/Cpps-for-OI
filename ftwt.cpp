#include<iostream>//O(2^n)
using namespace std;
void move(int n,char a,char b,char c){//a:Source of plate;b:Cache;c:Target plate;
    if(n==1){
        cout<<a<<"->"<<c<<endl;
    }
    else{
        move(n-1,a,c,b);
        cout<<a<<"->"<<c<<endl;
        move(n-1,b,a,c);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    move(n,'a','b','c');
    return 0;
}