#include<iostream>
using namespace std;
//1. 定义：下面有一个空链表，表头叫 head，并且表内没有任何元素。
struct Node{
    int value;
    Node *next;
}arr[1000];
int top=-1;
Node *head=NULL;
//2. 内存分配：在竞赛中不要用 new，也不要用 malloc、calloc——像下面一样做吧。
#define New(p) p=&arr[++top];p->value=0;p->next=NULL;
Node *p;

int main(){
    New(head);
    New(p);
    //插入：将q插入到p后边O(1)
    Node *q;
    New(q);
    if(p!=NULL&&q!=NULL){
        q->next=p->next;
        p->next=q;
    }
    //删除：把 p 的下一元素q删除。时间复杂度 O(1)。
    if(p!=NULL&&q->next!=NULL){
        Node *q=p->next;
        p->next=q->next;
        // delete(q); // 如果使用动态内存分配，最好将它的空间释放。
    }
    //查找或遍历：时间复杂度 O(n)。
    Node *first;
    first=head;
    Node *p=first;
    while (p!=NULL)
    {
        // 处理value
        // cout<<p->value<<'\t';
        p=p->next;
    }
    return 0;
}