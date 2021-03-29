#include <stdio.h>
#define TOL 1E-2

double dist( double h, double p );

int main()
{
    double h, p, d;
    scanf("%lf %lf", &h, &p);
    d = dist(h, p);
    printf("%.6f\n", d);
    return 0;
}

/* 你的代码将被嵌在这里 */
double dist( double h, double p )
{
    double t = h;
    double sum = h;
    if(t*p<TOL)
        return h;
    while(t >= TOL)
    {
        t = t*p;
        sum = sum + 2*t;
    }
    return sum-2*t;
}
