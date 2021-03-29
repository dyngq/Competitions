#include <stdio.h>
#include <stdlib.h>
typedef struct node{
int data;
struct node *next;
}node,*Linklist;
int main(){
int i;
int a[5]={1,2,3,4,5};
Linklist L;
L=(Linklist)malloc(sizeof(node));
node *p,*s;
L->next=NULL;
s=L;
//依次将数组a中的5个元素插入单链表中
for(i=0;i<5;i++){
p=(node*)malloc(sizeof(node));
p->data=a[i];
p->next=s->next;
s->next=p;
s=s->next;
}
//将该链表打印出来
p=L->next;
while(p){
printf("%d ",p->data);
p=p->next;
}
return 0;
}
