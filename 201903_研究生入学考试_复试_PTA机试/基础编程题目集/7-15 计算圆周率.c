#include <stdio.h>

int zdgy(int a, int b)/**不需要这个函数 想麻烦了 每个都求最大公约数反而更慢更浪费时间**/
{
    int x = a>b?a:b;
    for(int i = x; i > 0; i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
            break;
        }
    }
}

int main()
{
    //printf("%d\n",zdgy(12,16));
    double sum = 1.0;
    //int z,m;
    double a = 1.0, b = 1.0;
    int gy;
    double n;
    double t;
    t = a/b;
    //printf("%lf\n",t);
    //n=0.01;
    scanf("%lf",&n);
    //printf("a:%d  b:%d  t:%lf sum:%lf\n",a,b,t,sum);
    for(int i = 1; t>= n; i++)
    {
        a = a*i;//printf()
        b = b*(2*i+1);
        //gy = zdgy(a,b);
//        if(gy>1)
//        {
//            a = a/gy;
//            b = b/gy;
//        }
        t = a/b;
        sum = sum + t;
        //printf("a:%d  b:%d  i:%d  t:%lf sum:%lf\n\n",a,b,i,t,sum);
        if(t<n)
            break;
    }
    printf("%.6lf",sum*2);
    return 0;
}

