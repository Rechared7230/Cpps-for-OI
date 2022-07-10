#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2){
        cout<<"n为奇数";
    }
    else if(n%2==0){
        if(n==0)cout<<"n为0";
        else {
            cout<<"\"n为偶数\"";
        }
    }
    // n=n>123 ? 1234 : 5678;
    cout<<((n==0)?"n==0":"n!=0")<<endl;
    cout<<n;
    return 0;
}

/*
    if(){

    }   
    else if(){

    }
    else{

    }
*/

/*
    ==
    !=
    <=
    >=
*/

/*
    &&  a==0 && b==0
    ||  a==0 || b==0
    ~   ~(a==0) a!=0
    ！
*/
/*
    S1?A1:A2;
*/

/*
    \n
    \"
*/