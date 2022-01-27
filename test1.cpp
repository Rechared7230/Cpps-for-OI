#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector<int>p;
int main(){
	int a[100]={1,2,3,4,5,6,8,9,10,12};
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		if(binary_search(a,a+10,num))cout<<*lower_bound(a,a+10,num)<<endl;
		else cout<<"bcz\n";
	}
	return 0;
} 
