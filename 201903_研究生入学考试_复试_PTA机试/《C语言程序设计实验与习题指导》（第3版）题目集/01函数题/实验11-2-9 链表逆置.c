#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist()
{
    struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode)),*p,*q;
    head -> next =  NULL;
    p = head;
    int a;
    while(1)
    {
        scanf("%d",&a);
        if(a==-1)
            break;
        q = (struct ListNode*)malloc(sizeof(struct ListNode));
        q -> data = a;
        p -> next = q;
        p = q;
    }
    p -> next = NULL;
    head = head->next;
    return head;
}
//; /*裁判实现，细节不表*/;
struct ListNode *reverse( struct ListNode *head );
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode  *head;

    head = createlist();
    head = reverse(head);
    printlist(head);

    return 0;
}

/* 你的代码将被嵌在这里 */

struct ListNode *reverse( struct ListNode *head )
{
    struct ListNode *p = head;
    struct ListNode *q, *s;
    if(  (p == NULL) || (p != NULL && p->next == NULL)  )
        return head;
    else if(p!=NULL && p->next != NULL && p->next->next==NULL)
    {
        s = p -> next;
        s -> next = p;
        p -> next = NULL;
        head = s;
        return head;
    }
    else
    {

        s = p->next;
        q = p->next->next;

        p->next == NULL;head -> next = NULL;
        /**这个地方找错误找了很久**/
        /**教训**/
        /**知道是程序可能无法停止**/
        /**所以就应该找一个更直接的语句，直接改变head，而不是再操作p了**/


        while(q)
        {
            s->next = p;
            p = s;
            s = q;
            q = q->next;
        }
        s->next = p;
        head = s;
        return head;
    }
}
