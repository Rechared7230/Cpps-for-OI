#include<iostream>
#include<cstring>

using namespace std;

struct menmmber{
    string name;
    int age;
}mem[100];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>mem[i].name>>mem[i].age;
    }
    return 0;
}