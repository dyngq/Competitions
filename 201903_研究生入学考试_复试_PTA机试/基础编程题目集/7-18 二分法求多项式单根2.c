#include <stdio.h>
#include <math.h>
double a3, a2, a1, a0;
double f(double a)
{
    return a3*pow(a,3)+a2*pow(a,2)+a1*a+a0;
}
int main()
{
    int ok=1;
    double a,b;
    scanf("%lf%lf%lf%lf",&a3,&a2,&a1,&a0);
    scanf("%lf%lf",&a,&b);
    while((b-a)>0.001)
    {
        if(f((a+b)/2)==0)
        {
            printf("%.2f\n",(a+b)/2);
            ok=0;
            break;
        }
        else if(f((a+b)/2)*f(a)>0)
        {
            a=(a+b)/2;
        }
        else
//            if(f((a+b)/2)*f(b)>0)
        {
            b=(a+b)/2;
        }
    }
    if(ok)
        printf("%.2f\n",(a+b)/2);
    return 0;
}
