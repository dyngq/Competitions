#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
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
    struct ListNode  *list1, *list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printlist(list1);
    printlist(list2);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *createlist()
{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode *));
    struct ListNode *tail = head;
    head->next = NULL;
    int a;
    while(1)
    {
        scanf("%d",&a);
        if(a==-1)
        {
            head = head->next;
            return head;
        }
        struct ListNode *s = (struct ListNode *)malloc(sizeof(struct ListNode *));
        s->data = a;
        tail->next = s;
        tail = s;
        tail->next = NULL;
    }
}

struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode *));
    struct ListNode *tail = head;
    head->next = NULL;
    struct ListNode *p = list1;
    struct ListNode *q = list2;

    while(p!=NULL && q!=NULL)
    {
        if(p->data <= q->data)
        {
            tail->next = p;
            tail = p;
            p = p->next;
            tail->next = NULL;
        }
        else if(p->data > q->data)
        {
            tail->next = q;
            tail = q;
            q = q->next;
            tail->next = NULL;
        }
//        else
//        {
//            tail->next = q;
//            tail = q;
//            q = q->next;
//            p = p->next;
//            tail->next = NULL;
//        }

    }
    if(p!=NULL)
        tail->next = p;
    else if(q!=NULL)
        tail->next = q;
    return head->next;
}
