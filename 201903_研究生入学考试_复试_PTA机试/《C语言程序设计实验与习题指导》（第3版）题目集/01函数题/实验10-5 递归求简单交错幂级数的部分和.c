#include <stdio.h>

double fn( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));

    return 0;
}

/* 你的代码将被嵌在这里 */
#include <math.h>
double fn( double x, int n )
{
    double sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            sum = sum - pow(x, i);
        else
            sum = sum + pow(x, i);
    }
    return sum;
}
