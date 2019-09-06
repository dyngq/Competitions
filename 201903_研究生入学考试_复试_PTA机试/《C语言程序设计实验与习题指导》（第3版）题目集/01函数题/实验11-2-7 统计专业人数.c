#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ListNode {
    char code[8];
    struct ListNode *next;
};

struct ListNode *createlist(); /*����ʵ�֣�ϸ�ڲ���*/
int countcs( struct ListNode *head );

int main()
{
    struct ListNode  *head;

    head = createlist();
    printf("%d\n", countcs(head));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int countcs( struct ListNode *head )
{
    int n = 0;
    struct ListNode *p = head;
    for(p = head; p!=NULL; p = p->next)
    {
        if(p->code[1] == '0' && p->code[2] == '2')
            n++;
    }
    return n;
}
