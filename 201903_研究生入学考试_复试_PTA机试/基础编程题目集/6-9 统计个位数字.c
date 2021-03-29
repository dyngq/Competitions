#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */

int Count_Digit ( const int N, const int D )
{
    int count = 0;
    int n = N;
    if(n<0)
        n = -n;
    if(n==0)
        return 1;
    while(n>0)
    {
        //printf("n:%d    n%10: %d\n",n,n%10);
        if(n%10 == D)
            count++;
        n = n/10;
    }
    return count;
}
