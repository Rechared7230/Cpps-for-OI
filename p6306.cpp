#include<iostream>

using namespace std;

typedef long long LL;
#define gc pa==pb&&(pb=(pa=buf)+fread(buf,1,100000,stdin),pa==pb)?EOF:*pa++
static char buf[100000],*pa(buf),*pb(buf);
inline LL readint() {
	LL x=0;char c=gc;
	while(c<'0'||c>'9')c=gc;
	for(;c>='0'&&c<='9';c=gc)x=x*10+(c&15);
	return x;
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	
	
	return 0;
}

