#include <stdio.h>
int main ()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d %d",m/n,m%n);
}






/*
ʮ����ת������

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
������תʮ����

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
ð������
void BublleSort (int arr [], int count)
    {
        int i, j, temp;
        for(j=0; j<count-1; j ) ð�ݷ�Ҫ����n-1��
            for(i=0; i<count-j-1; i ) ֵ�Ƚϴ��Ԫ�س���ȥ��ֻ��ʣ�µ�Ԫ���е����ֵ�ٳ���ȥ�Ϳ�����
            {
                if(arr[i]>arr[i 1]) ��ֵ�Ƚϴ��Ԫ�س�����
                {
                    temp=arr[i 1];
                    arr[i 1]=arr[i];
                    arr[i]=temp;
                }
            }
    }
*/


/*
ѡ������
void SelectSort(int arr[], int count)
    {
        int i,j,min,temp;
        for(i=0; i<count; i )
            {
            min = arr[i];//�Դ�Ԫ��Ϊ��׼
            for(j=i 1; j<count; j )//��j��ǰ�����ݶ����źõģ����Դ�j��ʼ������ʣ�µ�Ԫ������С��
            {
                if(min>arr[j])//��ʣ��Ԫ������С���Ǹ��ŵ�arr[j]��
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
�������
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
    �������е�ƽ��ֵ
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
�ַ������Ӹ������͵���

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
strcat() ԭ��Ϊ char *strcat(char *dest, const char *src).
����Ϊ���������ַ�������src���ӵ�dest���棻����dest��ַ

strcmp()
�˺����ĺ���ԭ��Ϊ int strcmp(const char *str1, const char *str2).
����Ϊ�Ƚ������ַ�����
��str1ָ����ַ�������str2ָ����ַ���ʱ������������
��str1ָ����ַ�������str2ָ����ַ���ʱ������0��
��str1ָ����ַ���С��str2ָ����ַ���ʱ�����ظ�����

strcpy()
�˺���ԭ��Ϊ char *strcpy(char* dest, const char *src)
����Ϊ�����ַ������ݵ�Ŀ�Ĵ�����src��ָ������ݿ�����dest

strlen()
�˺���ԭ��Ϊunsigned in strlen(const char *str)

����Ϊ�����ַ���str�ĳ��ȣ�������'\0')��


*/


/*
�׳��Ƿ����
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
����
if(year%4==0&&year%100!=0||year%400==0)
        return 1;
*/


/*
շת
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
