#include<stdio.h>
#include<string.h>
//思路：使用结构体数组，存储每一个学生的信息。然后使用结构体的引用进行查找价格最高和最低的书籍，
//      最后打印出结果
struct book
{
	char name[31];
	double price;
};

int main()
{
	struct book books[10]; //定义结构体数组
	int i, n, maxi, mini;
	double max=-1, min=1000000;

	scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        scanf("\n");        //特别注意：该处需要进行再次读入“\n”,原因未知，还需完善改程序。
        gets(books[i].name);
        scanf("%lf",&books[i].price);
    }

    for(i = 0; i < n; i++)  //查询价格最高和最低的书籍及其下标
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
