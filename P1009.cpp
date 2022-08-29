#include<iostream>
namespace fastio{
    struct reader{
    	template<typename T> Reader&operator>>(T&x){
    		char c=getchar();short f=1;
    		while(c<'0'||c>'9'){if(c=='-')f*=-1;c=getchar();}
    		x=0;while(c>='0'&&c<='9'){
    			x=(x<<1)+(x<<3)+(c^48);
    			c=getchar();
    		}x*=f;return *this;
    	}
    }cin;
    struct writer{
        template<typename T>Writer&operator<<(T x){
    		if(x==0)return putchar('0'),*this;
    		if(x<0)putchar('-'),x=-x;
    		static int sta[45];int top=0;
    		while(x)sta[++top]=x%10,x/=10;
    		while(top)putchar(sta[top]+'0'),--top;
    		return*this;
    	}
    }cout;
};
#define cin fastio::cin
#define cout fastio::cout

using namespace std;

__int128 a=1,ans=0;
__int128 f(int n){
	a=1;
	for(int i=1;i<=n;i++)a*=i;
	return a;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=1;i++){
		ans+=f(i);
	}
	fastio::cout<<ans;
	return 0;
}
