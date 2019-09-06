#include<stdio.h>
#include<stdlib.h>

typedef char ElementType;
typedef struct treenode
{
    ElementType data;
    struct treenode *leftchild;
    struct treenode *rightchild;
} TreeNode;

/*ʹ�������������������*/
TreeNode *create_bitree()
{
    ElementType ch;
    TreeNode *T;

    scanf("%c",&ch);    //��������scanfʱ�����Ľ��һ��ȫ�����룬���Ҫһ��һ�������룬��%cǰ�Ӹ��ո�
    if(ch!='#')
    {
        T=(TreeNode*)malloc(sizeof(TreeNode));
        T->data=ch;
        T->leftchild=create_bitree();
        T->rightchild=create_bitree();
    }
    else
    {
        T=NULL;
    }
    return T;
}

/*�������*/
void pre_order_traversal(TreeNode *T)
{
    ElementType data;
    if(T!=NULL)
    {
        data=T->data;
        printf("%c ",data);
        pre_order_traversal(T->leftchild);
        pre_order_traversal(T->rightchild);
    }
}
int main()
{
    TreeNode *T = create_bitree();
    pre_order_traversal(T);
}
