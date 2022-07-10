#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int a[10009];
int main(){
    int i=0;
    int n;
    while(cin>>n){
        a[i]=n;
        i++;
    }
    for(int i=0;i<n;i++)cout<<a[i];
    return 0;
}