#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double x,y;
    x = a + c;
    y = b + d;

    if(fabs(x)-0.05<0)
        x = 0;
    if(fabs(y)-0.05<0)
        y = 0;

    printf("(%.1lf, %.1lf)",x, y);
    return 0;
}
