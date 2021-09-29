#include<iostream>

using namespace std;
int gcdEx(int a,int b,int &x,int&y) {
 
       //扩展欧几里得算法
 
       //求得aX + nY = gcd(a,n) 的一个(X,Y)
 
       if(b!=0){
 
              int r = gcdEx(b,a%b,x,y);
 
              int t = x;
 
              x= y;
 
              y= t - a/b*y;
 
              return r;
 
       }else {
 
              x= 1;
 
              y= 0;
 
              return a;
 
       }
 
}

inline int gcd(int a,int b) {
    return b>0 ? gcd(b,a%b):a;
}
void linear_congruences(int a,int b,int n){
 
       //求得 ax = b (mod n)
 
       if(b% gcd(a,n) == 0){
 
              int x,y,d,c,re;
 
              if(n>a) {
 
                     c= a;
 
                     a= n;
 
                     n= c;
 
                     d= gcdEx(a,n,x,y);
 
                     re= y*b/d;
 
                     cout<<"s";
 
                     cout<<"通解"<<re<<" + Z*"<<a/d<<endl;
 
              }else {
 
                     d= gcdEx(a,n,x,y);
 
                     re= x*b/d;
 
                     cout<<"通解"<<re<<" + Z*"<<n/d<<endl;
 
              }     
 
       }else {
 
              cout<<("Noresult")<<endl;
 
       }
 
}
 
int main(int argc,char* argv[])
 
{
 
 const long long P=998244353;
 linear_congruences(30,7,P);

 
   return 0;
 
}
