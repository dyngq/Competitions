#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double xx(double x,int n)
{
    double xx = 1;
    if(n==0)
        return 1.0;
    for(int i = 0; i < n; i++)
        xx = xx*x;
    return xx;
}

double jie(int x)
{
    if(x==0)
        return 1;
    double f = 1;
    for(int i = 1; i <= x; i++)
    {
        f = f*i;
    }
    return f;
}



double funcos( double e, double x )
{
    //printf("%.6lf\n",xx(3,2));
    double f = 0;
    for(int i = 0;; i=i+2)
    {
        //printf("1\n");
        if(i%4==0)
        {

            double a = xx(x,i)/jie(i);

            //printf("%d %lf\n",i,jie(i));
            f = f + a;
            //printf("1   %.6lf\n",a);
            if(fabs(a)<e)
                return f;
        }
        else
        {
            double a = xx(x,i)/jie(i);
            f = f - a;
            //printf("2   %.6lf\n",a);
            if(fabs(a)<e)
                return f;
        }
        //printf("2\n");
    }
    return f;
}










