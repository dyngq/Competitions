#include <stdio.h>

double jie(int n)
{
    double sum = 1;
    double suma = 1;
    double sumb = 1;
    for(int i = 1; i <= n; i++)
    {
        suma = suma * i;
    }
    for(int i = 1; i <= 2*n+1;i++ )
    {
        sumb = sumb * i;
        i++;
    }
    sum = suma/sumb;
    return sum;
}

int main()
{
    double e;
    scanf("%le",&e);
    if(e >= 1)
    {
        printf("PI = 2.00000");
        return 0;
    }
    //printf("%.0lf %.0lf\n",jie(3),jie(5));
    double sum = 1;
    for(int i = 1; ; i++)
    {
        double t = jie(i);
        //printf("%lf\n",t);
        //printf("%lf %lf %lf\n",t,jie(i),jie(2*i+1));
        if(t < e)
        {
            sum = sum + t;
            break;
        }
        else
            sum = sum + t;
    }
    printf("PI = %.5lf",2*sum);
}
