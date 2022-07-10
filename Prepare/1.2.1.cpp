#include<iostream>

using namespace std;

void function1(){       //void 的返回值是Undefined
    cout<<"This is your function1\n";
    return ;
}

void function2(int n){
    cout<<n%10<<endl;
    return ;
}

int function3(int n){
    return n%10;
}

int function4(int n);

void function5(int a,int b){        //形参传递的只是副本，函数修改的只是形参，不是main中的变量（实参）
    swap(a,b);
}

void function6(int &a,int &b){      //加上&，表示参数的引用，此时形参的变化会保留到实参中
    swap(a,b);
}

int main(){
    int n;
    cin>>n;
    if(n==1)function1();
    else if(n==2){
        int a;
        cin>>a;
        function2(a);
    }
    else if(n==3){
        int a;
        cin>>a;
        cout<<function3(a)<<endl;
    }
    else if(n==4){
        int a;
        cin>>a;
        cout<<function4(a)<<endl;
    }
    else if(n==5){
        int a,b;
        cin>>a>>b;
        function5(a,b);
        cout<<a<<" "<<b<<endl;
    }
    else if(n==6){
        int a,b;
        cin>>a>>b;
        function6(a,b);
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}

int function4(int n){
    return n%10;
}