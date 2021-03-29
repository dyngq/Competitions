#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int flag = 0;
void dectobin( int n )
{
    if(n == 0 && flag == 0)
    {
        printf("0\n");return;
    }
    flag = 1;
    if(n == 0 && flag == 1)
    {
        return;
    }
    else
    {
        dectobin(n/2);
    }
    printf("%d",n%2);
}
