#include<iostream>

using namespace std;
int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        char c;
        cin>>a>>b>>c;
        if(c=='+')cout<<a<<"+"<<b<<"="<<a+b<<endl;
        else if(c=='-')cout<<a<<"-"<<b<<"="<<a-b<<endl;
        else if(c=='*')cout<<a<<"*"<<b<<"="<<a*b<<endl;
        else cout<<a<<"/"<<b<<"="<<a/b<<endl;
    }
    return 0;
}