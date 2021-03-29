#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标1开始存储 */
Position BinarySearch( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    Position P;

    L = ReadInput();
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

/* 你的代码将被嵌在这里 */
List ReadInput()
{
    List L = (List)malloc(sizeof(List)*MAXSIZE);
    int n;
    scanf("%d",&n);
    L->Last = n-1;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&L->Data[i]);
    }
    return L;
}
Position BinarySearch( List L, ElementType X )
{
    int mid,head = 0;
    int f = 0;
    while(head<=L->Last)
    {

        mid = (head+L->Last)/2;
        if(L->Data[mid] == X)
            return mid;
        else if(L->Data[mid] < X)
            head = mid+1;
        else if(L->Data[mid] > X)
            L->Last = mid-1;
        //printf("%d %d %d\n",head,L->Last,head - L->Last);
    }
    return NotFound;
}

























