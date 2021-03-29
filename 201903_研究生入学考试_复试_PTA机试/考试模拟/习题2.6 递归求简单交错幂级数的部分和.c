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
double sum;
double fn( double x, int n )
{
    if(n==0)
        return 0;
    else
        return pow(-1,n+1)*pow(x,n) + fn(x,n-1);
}
