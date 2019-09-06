#include <stdio.h>
#include <math.h>

int su(int n)
{
    int a = 1;
    for(int i = 2; i < sqrt(n)+1; i++)
    {
        if(n%i==0)
            a = 0;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d",&n);
    int m;
    int f = 0;
    for(int i = 2; i <= n; i++)
    {
        m = pow(2,i) - 1;
        if(su(m)==1)
        {
            f = 1;
            printf("%d\n",m);
        }

    }
    if(f==0)
        printf("None");
}
