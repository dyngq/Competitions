#include <stdio.h>
#include <stdlib.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist( struct stud_node *head, int min_score );

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

/* 你的代码将被嵌在这里 */

struct stud_node *createlist()
{
    struct stud_node *head = (struct stud_node *)malloc(sizeof(struct stud_node));
    struct stud_node *tail = head;
    int n;
    int f = 0;
    while(1)
    {
        scanf("%d",&n);
        if(n == 0 && f == 0)
            return NULL;
        if(n==0)
        {
            head = head->next;
            return head;
        }
        f=1;
        struct stud_node *p = (struct stud_node *)malloc(sizeof(struct stud_node));
        scanf("%s %d",p->name,&p->score);
        p->num = n;
        tail->next = p;
        tail = p;
        tail->next = NULL;
    }
}

struct stud_node *deletelist( struct stud_node *head, int min_score )
{
    if(head == NULL)
        return NULL;
    while(head->score<min_score)
    {
        if(head->next == NULL)
        {
            head = NULL;
            return NULL;
        }
        else
            head = head->next;
    }
    struct stud_node *p = (struct stud_node *)malloc(sizeof(struct stud_node));
    p->next = head;
//    struct stud_node *s = head;
    while(p->next)
    {
        if(p->next->score < min_score)
        {
            //printf("%d ",p->next->score);
            p->next = p->next->next;
            //printf("%d ",p->next->score);
        }
        else
            p = p->next;
        //printf("\n");
    }
    return head;
}
/**

1 zhang 78
2 wang 80
3 li 75
4 zhao 85
0
60


**/
