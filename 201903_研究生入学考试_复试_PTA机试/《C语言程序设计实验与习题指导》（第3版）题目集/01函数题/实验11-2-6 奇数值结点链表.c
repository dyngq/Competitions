#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist()
{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tail;
    head -> next = NULL;
    tail = head;
    int x;
    while(1)
    {
        scanf("%d",&x);
        if(x==-1)
        {
            tail->next = NULL;
            head = head->next;
            return head;
        }
        struct ListNode *s = (struct ListNode *)malloc(sizeof(struct ListNode));
        s->data = x;
        tail->next = s;
        tail = s;
        tail->next = NULL;
    }
}
struct ListNode *getodd( struct ListNode **L )
{
    struct ListNode *p = *L;
    struct ListNode *head1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tail1;
    head1 -> next = NULL;
    tail1 = head1;

    struct ListNode *head2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tail2;
    head2 -> next = NULL;
    tail2 = head2;

    while(p)
    {
        if(p->data % 2 == 1)
        {
            struct ListNode *s = (struct ListNode *)malloc(sizeof(struct ListNode));
            s->data = p->data;
            tail1->next = s;
            tail1 = s;
            tail1->next = NULL;
        }
        else
        {
            struct ListNode *s = (struct ListNode *)malloc(sizeof(struct ListNode));
            s->data = p->data;
            tail2->next = s;
            tail2 = s;
            tail2->next = NULL;
        }
        p = p->next;
    }
    *L = head2->next;
    return head1->next;
}
