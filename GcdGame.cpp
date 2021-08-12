#include<iostream>

using namespace std;
void f(){
    int m,n;
    cin>>m>>n;
    int cnt=0;
    do{
        if(m<n)n%=m;
        else m=m%n;
        cnt++;
        cout<<m<<" "<<n<<endl;
    }while(m!=0&&n!=0);
    //cnt++;
    if(cnt%2==1)cout<<"Stan wins\n";
    else cout<<"Ollie wins\n";
    return ;
}
int main(){
    int nu;
    cin>>nu;
    for(int i=0;i<nu;i++)f();
    return 0;
}