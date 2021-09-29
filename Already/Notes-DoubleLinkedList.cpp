#include<iostream>
using namespace std;
//定义：下面有一个空链表，表头叫 first。
struct node{
    int value;
    node *next,*prev;
}arr[1000];
int top=-1;
node *first = NULL; // 根据实际需要可以维护一个表尾指针last。
//内存分配：最好不要使用 new 运算符或 malloc、calloc 函数。
#define new(p) p=arr+(++top);p->value=0;p->next=NULL;p->prev=NULL;
node *p;
node *head=NULL;
//(5) 将元素插入到有序链表中*
void insert(node *head, node *p)//void insert(const node *head, node *p)
{
    node *x, *y;
    y=head;
    do{
        x=y;
        y=x->next;
    } while ((y!=NULL) && (y->value < p->value));
    x->next=p;
    p->next=y;
}
int main(){
    new(head);
    new(p);
    node *q;
    new(q);
    //插入：把 q 插入到 p 的后面。时间复杂度 O(1)。
    if(p!=NULL||q!=NULL){//Connect 4 lines;
        q->prev=p;
        q->next=p->next;
        q->next->prev=q;
        p->next=q;
    }
    //删除：把 p 的下一元素删除。时间复杂度 O(1)。
    if(p!=NULL||p->next!=NULL){
        node *q=p->next;
        p->next=q->next;
        q->next->prev=p;
        // delete(q); // 如果使用动态内存分配，最好将它的空间释放。
    }
    
    return 0;
}