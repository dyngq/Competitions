#include <stdio.h>
int main ()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d %d",m/n,m%n);
}






/*
十进制转二进制

#include <stdio.h>

int main()
{
    int n, r, m, t, i, j=0;
    int a[10086];
    while(scanf("%d", &n)!=EOF)
    {
        t = 1; j = 0;
        while(t!=0)
        {
            r = n % 2;
            t = n / 2;
            n = t;
            if(r==1)
                a[j]=1;
            else
                a[j]=0;
            j++;
        }
        for(i=j-1; i>=0; --i)
            printf("%d", a[i]);
        printf("\n");
    }
    return 0;
}

*/
/*
二进制转十进制

#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    int i, j;
    unsigned long long q;
    char a[33];
    while(scanf("%s",a)!=EOF)
    {
        j=0;q=0;
        for(i=strlen(a)-1;i>=0;i--)
        {
           q = q + (a[i]-48)*pow(2,j);
            j++;
        }
        printf("%llu\n",q);
    }

    return 0;
}
*/
/**************************************************************
    Problem: 1635
    User: 201501060119
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:748 kb
****************************************************************/


#include <stdio.h>
int main ()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d %d",m/n,m%n);
}




/*
冒泡排序
void BublleSort (int arr [], int count)
    {
        int i, j, temp;
        for(j=0; j<count-1; j ) 冒泡法要排序n-1次
            for(i=0; i<count-j-1; i ) 值比较大的元素沉下去后，只把剩下的元素中的最大值再沉下去就可以啦
            {
                if(arr[i]>arr[i 1]) 把值比较大的元素沉到底
                {
                    temp=arr[i 1];
                    arr[i 1]=arr[i];
                    arr[i]=temp;
                }
            }
    }
*/


/*
选择排序
void SelectSort(int arr[], int count)
    {
        int i,j,min,temp;
        for(i=0; i<count; i )
            {
            min = arr[i];//以此元素为基准
            for(j=i 1; j<count; j )//从j往前的数据都是排好的，所以从j开始往下找剩下的元素中最小的
            {
                if(min>arr[j])//把剩下元素中最小的那个放到arr[j]中
                {
                    temp = arr[j];
                    arr[j] = min;
                    min = temp;
                }
            }
        }
    }

*/



/*
输出菱形
#include <stdio.h>
int print_graphic(int n)
{
    int i,j,m;
    for (i=1;i<=n;i++)
        printf("*");
    printf("\n");
    m=n/2;
    for (i=1;i<=m;i++)
    {
        for (j=0;j<=m-i;j++)
            printf("*");
        for (j=1;j<=2*i-1;j++)
            printf(" ");
        for (j=0;j<=m-i;j++)
            printf("*");
        printf("\n");
    }
    for (i=m-1;i>=1;i--)
    {
        for (j=0;j<=m-i;j++)
            printf("*");
        for (j=1;j<=2*i-1;j++)
            printf(" ");
        for (j=0;j<=m-i;j++)
            printf("*");
        printf("\n");
    }
    for (i=1;i<=n;i++)
        printf("*");
}

int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}

*/



/*
    求矩阵各列的平均值
    #include <stdio.h>
#define MAX_SIZE 101
int get_matrix(int mtx[101][101], int m, int n)
{
    int i=0,j=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&mtx[i][j]);
    }
    return mtx;
}
int put_array(double arr[], int n)
{
    int i;
    printf("%lg",arr[0]);
    for (i=1;i<n;i++)
    {
        printf(" %lg",arr[i]);
    }
    printf("\n");
}
int count_average(double arr[], int mtx[][101], int m, int n)
{
    int i=0,j=0,sum=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+mtx[j][i];
        }
        arr[i]=(double)sum/m;
    }
    return arr;
}

int main()
{
    int i, cases;
    double average[MAX_SIZE];
    int m, n, matrix[MAX_SIZE][MAX_SIZE];
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%d%d", &m, &n);
        get_matrix(matrix, m, n);
        count_average(average, matrix, m, n);
        printf("case %d:", i);
        put_array(average, n);
    }
    return 0;
}

*/







/*
#include <stdio.h>
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf ("Octal Decimal Hexadecimal\n");
    printf ("%-6o",a);
    printf ("%-8d",a);
    printf ("%x",a);
    printf ("\n");
    printf ("%-6o",b);
    printf ("%-8d",b);
    printf ("%x",b);
    return 0;
}

*/


/*
字符串链接复制类型的题

#include <stdio.h>
#include<stdlib.h>
#define MAX_STR_LEN 101
char * str_cat(char * t, char * s)
{
    int i=0,x=0;
    char *p=malloc(500);
    while(t[i]!='\0')
    {
        p[i]=t[i];
        i++;// t long;
    }
    while(s[x]!='\0')
    {
        p[i+x]=s[x];
        x++;
    }
    p[i+x]='\0';
    return p;
}

int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL && gets(str) != NULL)
    {
        p = str_cat(str, s);
        puts(str);
        puts(s);
        puts(p);
        free(p);
    }
    return 0;
}


*/



/*
strcat() 原型为 char *strcat(char *dest, const char *src).
功能为连接两个字符串，把src连接到dest后面；返回dest地址

strcmp()
此函数的函数原型为 int strcmp(const char *str1, const char *str2).
功能为比较两个字符串。
当str1指向的字符串大于str2指向的字符串时，返回正数。
当str1指向的字符串等于str2指向的字符串时，返回0。
当str1指向的字符串小于str2指向的字符串时，返回负数。

strcpy()
此函数原型为 char *strcpy(char* dest, const char *src)
功能为拷贝字符串内容到目的串，把src所指向的内容拷贝到dest

strlen()
此函数原型为unsigned in strlen(const char *str)

功能为返回字符串str的长度（不包括'\0')。


*/


/*
阶乘是否溢出
#include <stdio.h>
int main()
{
    int k,i=1,a,b;
    unsigned s=0;
    scanf("%d",&k);
    for(a=1;a<=k;a++)
        {
            for(b=1;b<=a-1;b++)
             i=i*b;
                 {
                     if((i*b/i)!=b)
                        {
                            printf("overflow");
                            goto jump;
                        }
                 }
           i=i*a;
           s=s+i;
           i=1;
        }
    printf("%u",s);
    jump:
return 0;
}

*/






/*
闰年
if(year%4==0&&year%100!=0||year%400==0)
        return 1;
*/


/*
辗转
#include <stdio.h>
int main()
{   int a,b,c,m,t;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==0&&b!=0)
            printf("%d %d\n",b,a);
        else if(a!=0&&b==0)
             printf("%d %d\n",a,b);

        else
    {
        if(a<b)
        {
            t=a;
            a=b;
            b=t;
        }
        m=a*b;
        c=a%b;
        while(c!=0)
        {
            a=b;
            b=c;
            c=a%b;
        }
        printf("%d %d\n",b,m/b);
    }
    }
}

*/

/**************************************************************
    Problem: 1635
    User: 201501060119
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:952 kb
****************************************************************/
