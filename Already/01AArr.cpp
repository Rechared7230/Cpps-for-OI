#include<bits/stdc++.h>
using namespace std;
namespace IO{//by cyffff
	int len=0;
	char ibuf[(1<<20)+1],*iS,*iT,out[(1<<25)+1];
	#if ONLINE_JUDGE
	#define gh() (iS==iT?iT=(iS=ibuf)+fread(ibuf,1,(1<<20)+1,stdin),(iS==iT?EOF:*iS++):*iS++)
 	#else
	#define gh() getchar()
	#endif
	#define reg register
	inline int read(){
		reg char ch=gh();
		reg int x=0;
		reg char t=0;
		while(ch<'0'||ch>'9')   t|=ch=='-',ch=gh();
		while(ch>='0'&&ch<='9') x=x*10+(ch^48),ch=gh();
		return t?-x:x;
	}
	inline void putc(char ch){
		out[len++]=ch;
	}
	template<class T>
	inline void write(T x){
		if(x<0)putc('-'),x=-x;
		if(x>9)write(x/10);
		out[len++]=x%10+48;
	}
	inline void flush(){
		fwrite(out,1,len,stdout);
		len=0;
	}
}
using IO::read;
using IO::write;
using IO::flush;
using IO::putc;
bool a[1000000];
int d[1000000];
int main(){
    int n,m;
    n=read();
    m=read();
    for(int i=0;i<n;i++)a[i]=read();
    for(int i=0;i<m;i++){
        int c,l,r;
        c=read();
        l=read();
        r=read();
        if(c==1){
            d[1]=a[1];
            int len=1;
            for (int i=2;i<=n;i++){
                if (a[i]>=d[len]) d[++len]=a[i];
                else{
                int j=upper_bound(d+1,d+len+1,a[i])-d;
                d[j]=a[i]; 
                }
            }
            write(len);
            putc('\n');
        }
        else if(c==2){
            d[1]=a[1]; 
            int len=1;
            for (int i=2;i<=n;i++){
                if (a[i]>=d[len]) d[++len]>a[i];
                else {
                int j=lower_bound(d+1,d+len+1,a[i])-d;
                d[j]=a[i]; 
                }
            }
            write(len);
            putc('\n');
        }
    }
    flush();
    return 0;
}