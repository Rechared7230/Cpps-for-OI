#include<iostream>
#include<queue>
#include<vector> 

using namespace std;
int n,m;
priority_queue<int,vector<int>,greater<int> >r;
priority_queue<int,vector<int>,less<int> >l;
int a[200009];

void push(int x){
	if(x<=l.top()){
		l.push(x);
	}
	else {
		r.push(x);
	}
}

int main(){
	cin>>m>>n;
	for(int i=0;i<m;i++)cin>>a[i+1];
	int j=1;
	l.push(a[1]);
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		while(j<t){
			push(a[++j]);
		}
		while(l.size()>i){
			int c=l.top();
			if(l.size()>=1)l.pop();
			r.push(c);
		}
		while(l.size()<i){
			int c=r.top();
			if(r.size()>=1)r.pop();
			l.push(c);
		}
		cout<<l.top()<<endl;
	}
	
	return 0;
} 
