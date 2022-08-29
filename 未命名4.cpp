#include<iostream>
#include<vector>
#include<queue>

using namespace std;
typedef unsigned int uint;
uint n,seed;
struct gra{
	int tag;
};
vector<gra>g[10000009];
unsigned long long a[10000009];
unsigned long long ans=0;
priority_queue<int,vector<int>,less<int> >q;

bool operator< (gra x,gra y){
	return a[x.tag]<a[y.tag];
}
bool operator> (gra x,gra y){
	return a[x.tag]>a[y.tag];
}


inline uint get_next(uint &seed){
	seed ^= seed << 13;
	seed ^= seed >> 17;
	seed ^= seed << 5;
	return seed;
}

int main(){
	cin>>n>>seed;
	for (register int i = 1; i <= n; i++){
		a[i] = get_next(seed);
	}
	for (register int i = 2; i <= n; i++){
		int a;
		a = get_next(seed) % (i - 1) + 1;
		gra cac;
		cac.tag=i;
		g[a].push_back(cac);
	}
	q.push(1);
//	ans=a[1];

	while(q.size()){
		int cc=q.top();
		int num=cc.tag;
		ans+=a[num];
		for(int i=0;i<g[num].size();i++){
			gra cac;
			cac.tag=g[num][i];
			q.push(cac);
		}
	}
	cout<<ans;
	return 0;
}

