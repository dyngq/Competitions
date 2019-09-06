#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for ( p = head; p != NULL; p = p->next )
        printf("%d ", p->data);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *createlist()
{
    int f = 0;
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    while(1)
    {

        int n;
        scanf("%d",&n);

        if(n==-1&&f==0)
            return NULL;
        else if(n!=-1&&f==0)
        {
            struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
            p->data = n;
            p->next = NULL;
            head->next = p;
        }
        else if(f==1)
        {
            if(n==-1)
            {
                return head->next;
            }

            struct ListNode *s = (struct ListNode *)malloc(sizeof(struct ListNode));
            s->data = n;
            s->next = head->next;
            head->next = s;
        }
        f = 1;
    }

}
