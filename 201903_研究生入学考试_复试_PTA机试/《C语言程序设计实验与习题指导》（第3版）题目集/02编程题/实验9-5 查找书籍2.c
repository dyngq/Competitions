#include<stdio.h>
#include<string.h>
//˼·��ʹ�ýṹ�����飬�洢ÿһ��ѧ������Ϣ��Ȼ��ʹ�ýṹ������ý��в��Ҽ۸���ߺ���͵��鼮��
//      ����ӡ�����
struct book
{
	char name[31];
	double price;
};

int main()
{
	struct book books[10]; //����ṹ������
	int i, n, maxi, mini;
	double max=-1, min=1000000;

	scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        scanf("\n");        //�ر�ע�⣺�ô���Ҫ�����ٴζ��롰\n��,ԭ��δ֪���������Ƹĳ���
        gets(books[i].name);
        scanf("%lf",&books[i].price);
    }

    for(i = 0; i < n; i++)  //��ѯ�۸���ߺ���͵��鼮�����±�
    {
        if(books[i].price > max)
        {
            max = books[i].price;
            maxi = i;
        }
        if(books[i].price < min)
        {
            min = books[i].price;
            mini = i;
        }
    }
    printf("%.2lf, %s\n",books[maxi].price,books[maxi].name);
	printf("%.2lf, %s\n",books[mini].price,books[mini].name);

	return 0;
}
