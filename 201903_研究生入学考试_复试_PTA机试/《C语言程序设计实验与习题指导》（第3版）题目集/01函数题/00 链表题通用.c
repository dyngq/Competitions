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
//; /*����ʵ�֣�ϸ�ڲ���*/;
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

/* ��Ĵ��뽫��Ƕ������ */

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
        /**����ط��Ҵ������˺ܾ�**/
        /**��ѵ**/
        /**֪���ǳ�������޷�ֹͣ**/
        /**���Ծ�Ӧ����һ����ֱ�ӵ���䣬ֱ�Ӹı�head���������ٲ���p��**/


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
