#include <stdio.h>

int main()
{
    double x,y;
    scanf("%lf",&x);
    if(x<=15)
    {
        y = x*4/3;
    }
    else
    {
        y = 2.5*x - 17.5;
    }
    printf("%.2lf",y);
    return 0;
}
