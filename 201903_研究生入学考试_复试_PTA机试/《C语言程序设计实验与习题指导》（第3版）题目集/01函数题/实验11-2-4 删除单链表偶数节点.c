#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();
struct ListNode *deleteeven( struct ListNode *head );
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
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *createlist()
{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tail = (struct ListNode *)malloc(sizeof(struct ListNode));
    tail = head;
    struct ListNode *p = head;
    int t;
    head -> next = NULL;
    while(1)
    {
        scanf("%d",&t);
        if(t==-1)
        {
            head = head->next;
            return head;
        }
        struct ListNode *s = (struct ListNode *)malloc(sizeof(struct ListNode));
        s->data = t;
        tail->next = s;
        tail = s;
        tail->next = NULL;
    }
}
struct ListNode *deleteeven( struct ListNode *head )
{
    struct ListNode *p;
    while(head->data%2==0)
    {
        head = head->next;
        if(head == NULL)
            return NULL;
    }


    p = head;
    while(1)
    {
        if(p==NULL || p->next == NULL)
            break;//printf("aaaaa\n");
        if(p->next->data % 2==0)
        {
            p->next = p->next->next;//printf("1\n");
        }
        else
        {
            p = p->next;
            //printf("2\n");
        }
    }
    return head;
}
