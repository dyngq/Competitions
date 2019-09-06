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

Position BinarySearch( List L, ElementType X )
{

}




/**


Position BinarySearch(List Tbl, ElementType K)
{
    int left = 1, right = Tbl->Last;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(Tbl->Data[mid] < K)
        {
            left = mid + 1;
        }
        else if(Tbl->Data[mid] > K)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return NotFound;

---------------------
作者：zzzsdust
来源：CSDN
原文：https://blog.csdn.net/m0_38015368/article/details/78513097
版权声明：本文为博主原创文章，转载请附上博文链接！


**/








