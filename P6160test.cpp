#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
long double ans, a, b, c;
int main(){
	scanf("%Lf%Lf%Lf", &a, &b, &c);
	if(a > b) swap(a, b);
	if(a > c) swap(a, c);
	if(b > c) swap(b, c);//从小到大排序一下。
	ans = (max(c - a - b, (long double)0) * max(c - a - b, (long double)0) - c * c - a * a - b * b) / 2.0;//只是简化一下而已
	printf("%0.1Lf", ans);
	return 0;//完结撒花-v-
}
