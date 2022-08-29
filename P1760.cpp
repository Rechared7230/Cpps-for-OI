#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
const int maxn = 1e6 +5;
char a1[maxn], b1[maxn];
int a[maxn], b[maxn], c[2 * maxn];    //c的最高位最大为 la + lb,所以 maxn * 
void fun(){
	int la = strlen(a1), lb = strlen(b1);
    for(int i  = 0; i < la; ++i) a[i] = a1[la - i - 1] - '0';
    for(int i  = 0; i < lb; ++i) b[i] = b1[lb - i - 1] - '0';        //读入
    for(int i = 0; i < la; ++i)            //用b乘以a的每一位
    {
        for(int j = 0; j < lb; ++j)
        {
            c[i + j] += a[i] * b[j];
            c[i + j + 1] += c[i + j] / 10;        //给下一位进位
            c[i + j] %= 10;
        }
    }
    int lc = la + lb;
    while(c[lc] == 0 && lc > 0)  lc--;    //删除前导零
    for(int i = lc; i >= 0; --i) printf("%d", c[i]);
//    printf("\n");
}
int main()
{
    a1[0]=1;b1[0]=2;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    	
		fun();
		b1[0]=2;
	}
    return 0;
}
