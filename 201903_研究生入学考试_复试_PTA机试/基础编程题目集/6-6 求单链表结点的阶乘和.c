#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
    int Data; /* �洢������� */
    PtrToNode Next; /* ָ����һ������ָ�� */
};
typedef PtrToNode List; /* ���嵥�������� */

int FactorialSum( List L );

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int jie(int a)
{
    int jj = 1;
    for(int i = 1; i <= a; i++)
    {
        jj = jj * i;
    }
    return jj;
}
int FactorialSum( List L )
{
    int sum = 0;
    int temp;
    while(L)
    {
        temp = jie(L->Data);
        sum = sum + temp;
        //printf("%d %d\n", L->Data, temp);
        L = L -> Next;
    }
    return sum;
}
