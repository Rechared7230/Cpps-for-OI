#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a%10;
            a++;
            a%=10;
        }
        cout<<endl;
    }
    return 0;
}