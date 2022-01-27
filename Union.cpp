#include<iostream>

using namespace std;

struct node{
    int parent;
    int count,value;
}set[10000];
int find(int x){
    return (set[x].parent==x)?x:(set[x].parent=find(set[x].parent));
}
int Union(int x,int y){
    x=find(x);
    y=find(y);
    if(set[x].count>set[y].count){
        set[y].parent=x;
        set[x].count+=set[y].count;
    }
    else{
        set[x].parent=y;
        set[y].count+=set[x].count;
    }
}

int main(){

    return 0;
}