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
//���ν�����a�е�5��Ԫ�ز��뵥������
for(i=0;i<5;i++){
p=(node*)malloc(sizeof(node));
p->data=a[i];
p->next=s->next;
s->next=p;
s=s->next;
}
//���������ӡ����
p=L->next;
while(p){
printf("%d ",p->data);
p=p->next;
}
return 0;
}
