#include<iostream>
#include<algorithm>
//#include<stack>
#include<queue>

using namespace std;

//int a[2000009];
int n;
queue<int>q;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
//		cin>>a[i];
		int num;
		cin>>num;
		if(q.empty())q.push(num);
		else{
			if(q.front()!=num){
				q.pop();
			}
		}
	}
	cout<<q.front();
	
	return 0;
}

