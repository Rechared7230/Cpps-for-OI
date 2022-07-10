//模拟退火算法
#include<iostream>
#include<cstdlib> 
#include<iomanip>
#include<cmath>
// #include<windows.h>

using namespace std;
double n;
double T = 20000;//初始温度
double dT = 0.99;//温度变化值
const double eps = 1e-14;//下界
double func(double x){          //f(x)定义
    return fabs(x * x - n);
}
void sa(){          //退火
    
    double x = 0;
    double f = func(x);
    while(T>eps){
        double dx = x + (rand() * 2 - RAND_MAX) * T;
        while(dx<0)dx = x + (rand() * 2 - RAND_MAX) * T;
        double df = func(dx);
        if(df < f){             //比当前好进行扩展的概率为1
            x=dx;
            f=df;
        }
        else if(exp((f-df) / T) * RAND_MAX > rand()){       //比当前差的扩展的概率小于1，大于0
            x=dx;
            f=df;
        }
        cout<<fixed<<setprecision(8)<<x<<"\n";
        // Sleep(1);
        T *= dT;
    }
    cout<<fixed<<setprecision(8)<<x;
}
int main(){
    // freopen("fire.txt","w",stdout);
    cin>>n;
    sa();
    return 0;
}
