#include <stdio.h>
#include <math.h>
int main()
{
    double a3,a2,a1,a0;
    int flag = 0;
    scanf("%lf%lf%lf%lf",&a3,&a2,&a1,&a0);
    double a,b;
    scanf("%lf%lf",&a,&b);
    double mid = (a+b)/2;
    if(a3*mid*mid*mid + a2*mid*mid + a1*mid + a0 == 0)
    {
        flag = 1;
        printf("%.2lf",(a+b)/2);
    }
    double ta,tb;
    while((b-a)>0.001)
    {
        double s = a3*mid*mid*mid + a2*mid*mid + a1*mid + a0;
        double sa = a3*a*a*a + a2*a*a + a1*a + a0;
        double sb = a3*b*b*b + a2*b*b + a1*b + a0;
        //printf("%lf %lf %lf %lf %lf\n",s,sa,sb,a,b);
        if(s==0)
        {
            //printf("1\n");
            break;
        }
        else if(s<0&&sa<0||s>0&&sa>0)
        {
            //printf("2 %lf %lf\n",a,b);
            a = (a+b)/2;
            //printf("2 %lf %lf\n",a,b);
        }
        else if(s<0&&sb<0||s>0&&sb>0)
        {
            b = (a+b)/2;
            //printf("3 %lf %lf\n",a,b);
        }

        if(a<0)
            ta = -a;
        else
            ta = a;
        if(b<0)
            tb = -b;
        else
            tb = b;
        double temp = ta - tb;
        if(temp<0)
            temp = -temp;
        if((ta*1000<1&&ta>0)||(tb*1000<1&&tb>0)||(temp*1000<9&&temp>0)||(b-a)<=0.001)
        {
             //printf("4 %d %d\n",ta*1000,tb*1000);
             break;
        }
        mid = (a+b)/2;
    }
    if(flag==0)
        printf("%.2lf",(a+b)/2);
    return 0;
}
