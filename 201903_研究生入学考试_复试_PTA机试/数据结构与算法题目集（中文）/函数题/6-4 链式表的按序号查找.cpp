#include <stdio.h>
#include <stdlib.h>

#define ERROR -1
typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode List;

List Read();

ElementType FindKth( List L, int K );

int main()
{
    //freopen("in.txt","r",stdin);
    int N, K;
    ElementType X;
    List L = Read();

    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &K);
        X = FindKth(L, K);
        if ( X!= ERROR )
            printf("%d ", X);
        else
            printf("NA ");
    }
    return 0;
}
List Read()     //β�巨
{
    int num = 0;
    scanf( "%d",&num );
    List list = ( List )malloc( sizeof( struct LNode ) );
    list->Next = NULL;      //��������
    list->Data = num;
    List last = list;       //����ָ���β��ָ��
    while( scanf( "%d",&num )==1&&(num!=-1)){
        PtrToLNode node = ( List )malloc( sizeof( struct LNode ) );//�����½ڵ�
        node->Data = num;
        node->Next = NULL;
        last->Next = node;      //���½ڵ�����β
        last = node;            //��βָ��ָ���½ڵ�
    }
    return list;

}
ElementType FindKth( List L, int K ){
    if(L==NULL) return ERROR;
    while(--K){                         //�����ƶ�K-1��,���ҵ�K��Ԫ��
        if(L->Next==NULL) return ERROR; //��K��������ĳ��ȣ�����ERROR
        else L=L->Next;
    }
    return L->Data;                     //���ص�K��Ԫ��
}


ElementType FindKth( List L, int K )
{
    for(int i = 0;i<K-1;i++)
    {
        L = L->Next;
    }
    if(L!=NULL)
        retu    rn  L->Data;
    else
        return -1;
}
