#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n)
{
    int a = 1,b = 1;
    int t;
    if(n==1 || n==2)
        return 1;
    for(int i = 3; i <= n; i++)
    {
        t = a + b;
        a = b;
        b = t;
    }
    return t;
}

/**
1 1 2 3 5 8 13
**/
void PrintFN( int m, int n )
{
    int t = 0;
    int k = 0;
    for(int i = 1; ;i++)
    {
        t = fib(i);
        //printf("%d ",t);
        if(t > n)
            break;

        if(t>=m && k==0)
        {
            printf("%d",t);
            k=1;
        }
        else if(t>=m && k>0)
            printf(" %d",i);
    }
    if(k==0)
        printf("No Fibonacci number");

}
