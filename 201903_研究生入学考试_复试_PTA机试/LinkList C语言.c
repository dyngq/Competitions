#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef int ElementType;
typedef struct LNode {
       ElementType data;
       struct LNode *next;
}LNode, *LinkList;
void creat_list(LinkList *L, int n)
{
       //*test = 1;
       /****/
       *L = (LinkList)malloc(sizeof(LNode));
       /****/
       LNode *s;
       LNode *r = *L;
       int k;
       for (int i = 0; i < n; i++)
       {
              scanf("%d", &k);// >> k;
              s = (LNode *)malloc(sizeof(LNode));
              s->data = k;
              r->next = s;
              r = s;
       }
       r->next = NULL;
       //return L;
}
LinkList insert_list(LinkList *L, int n)
{
       LNode *s;
       LNode *p;
       p = *L;
       int flag = 0;
       while (p->next)
       {
              if (p->data <= n && p->next->data >= n)
              {
                     s = (LNode *)malloc(sizeof(LNode));
                     s->data = n;
                     s->next = p->next;
                     p->next = s;
                     flag = 1;
                     break;
              }
              else
                     p = p->next;
       }
       if (flag == 0)
       {
              s = (LNode *)malloc(sizeof(LNode));
              s->data = n;
              p->next = s;
              s->next = NULL;
       }
}
void print_LinkList(LinkList L, int n)
{
       int i = 0;
       //printf("print\n");
       for (i = 0; i < n&&L->next != NULL; i++)
       {
              L = L->next;
              printf(" %d", L->data);
              //cout << " " <<  ;
       }
       //printf("\n%d\n",i);
//    L = L->next;
//    cout << L->data;
}
int main()
{
       LinkList L;
       L = (LinkList)malloc(sizeof(LNode));
       int n;
       scanf("%d", &n);
       int test = 0;
       creat_list(&L, n);
       //printf("\n%d\n",test);
       int k;
       scanf("%d", &k);
       //cin >> k;
       insert_list(&L, k);
       print_LinkList(L, n + 1);
}
