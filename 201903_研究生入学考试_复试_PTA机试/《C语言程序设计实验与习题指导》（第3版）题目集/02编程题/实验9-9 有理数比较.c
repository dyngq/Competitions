#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d;
    char c1,c2;
    scanf("%lf%c%lf %lf%c%lf",&a,&c1,&b,&c,&c2,&d);
    if(a/b > c/d)
        printf("%.0lf/%.0lf > %.0lf/%.0lf",a,b,c,d);
    else if(a/b < c/d)
        printf("%.0lf/%.0lf < %.0lf/%.0lf",a,b,c,d);
    else if(a/b == c/d)
        printf("%.0lf/%.0lf = %.0lf/%.0lf",a,b,c,d);
    return 0;
}
