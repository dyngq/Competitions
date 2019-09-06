#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
};

List ReadInput(); /* ����ʵ�֣�ϸ�ڲ���Ԫ�ش��±�1��ʼ�洢 */
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

/* ��Ĵ��뽫��Ƕ������ */

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
���ߣ�zzzsdust
��Դ��CSDN
ԭ�ģ�https://blog.csdn.net/m0_38015368/article/details/78513097
��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�


**/








