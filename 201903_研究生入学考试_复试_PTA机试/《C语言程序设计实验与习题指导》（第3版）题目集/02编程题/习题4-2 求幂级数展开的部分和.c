#include <stdio.h>
#include <math.h>

/**全部用double时， 最大n就通过了， double可以稍微扩大一下范围的 以后可以尝试**/

double jie(double a)
{
    double sum = 1;
    for(int i = 2; i <=a; i++)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{
    double sum = 1;
    double kang;
    kang = 1;
    double x;
    scanf("%lf",&x);
    for(int  i = 1; kang >= 0.00001; i++)
    {
        kang = pow(x,i)/jie(i);
        sum = sum + kang;
        //printf("%lf",sum);
    }
    printf("%.4lf",sum);
}
