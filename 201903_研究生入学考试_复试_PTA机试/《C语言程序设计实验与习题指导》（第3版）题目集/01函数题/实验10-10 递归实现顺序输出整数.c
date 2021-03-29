#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printdigits(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int flag = 0;
void printdigits( int n )
{
    if(n == 0 && flag == 0)
    {
        printf("0\n");
        return;
    }
    flag = 1;
    if(n == 0 && flag == 1)
    {
        return;
    }
    else
    {
        printdigits(n/10);
    }

    printf("%d\n",n%10);
}
