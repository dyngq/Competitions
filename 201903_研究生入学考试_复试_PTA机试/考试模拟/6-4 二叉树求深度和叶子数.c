//ͷ�ļ�����
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>

//����״̬�붨��
#define TRUE       1
#define FALSE      0
#define OK         1
#define ERROR      0
#define OVERFLOW   -1
#define INFEASIBLE -2

typedef int Status;

//��������洢�ṹ����
typedef int TElemType;
typedef struct BiTNode{
    TElemType data;
    struct BiTNode  *lchild, *rchild;
} BiTNode, *BiTree;

//���򴴽������������
Status CreateBiTree(BiTree T){
   TElemType e;
   scanf("%d",&e);
   if(e==0)T=NULL;
   else{
     T=(BiTree)malloc(sizeof(BiTNode));
     if(!T)exit(OVERFLOW);
     T->data=e;
     CreateBiTree(T->lchild);
     CreateBiTree(T->rchild);
   }
   return OK;
}

//��������Ҫʵ�ֵĺ���������
int GetDepthOfBiTree ( BiTree T);
int LeafCount(BiTree T);
//������������
int main()
{
   BiTree T;
   int depth, numberOfLeaves;
   CreateBiTree(T);
   depth= GetDepthOfBiTree(T);
    //numberOfLeaves=LeafCount(T);
   printf("%d %d\n",depth,numberOfLeaves);
}

/* ����������д�� */
int GetDepthOfBiTree ( BiTree T)
{
        if(T==NULL)
            return 0;
        else
        {
            int m = GetDepthOfBiTree(T->lchild);printf("1");
            int n = GetDepthOfBiTree(T->rchild);
            if(m>n)
                return m+1;
            else
                return n+1;
        }

}
int LeafCount(BiTree T);













