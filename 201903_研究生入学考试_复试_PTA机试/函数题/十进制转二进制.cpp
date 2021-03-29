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
int y,c = 0;
void dectobin(int n)
{
    if(n==0&&c==0)
    {
        printf("%d",n%2);
        return ;
    }
    else if(n==0&&c>0)
    {
        return ;
    }
    else
    {
        c++;
        dectobin(n/2);
    }

    printf("%d",n%2);
}
