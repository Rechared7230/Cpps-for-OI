#include<iostream>
using namespace std;
int main(){
    int ans;
    for(ans=1;;ans++){
        if(ans%3==1&&ans%5==2&&ans%7==3)break;
    }
    cout<<ans;
    return 0;
}