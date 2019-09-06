#include <stdio.h>

int main()
{
    int n,sum;
    scanf("%d %d",&n, &sum);
    double a[n],b[n];
    double c[n];
    double temp1,temp2;
    double temp3;
    double sp = 0;
    double sh = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&b[i]);
    }
    for(int i = 0; i < n; i++)
    {
        c[i] = b[i] / a[i];
        //printf("%lf %lf %lf\n",a[i],b[i],c[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(c[j] < c[j+1])
            {
                temp1 = a[j];
                a[j] = a[j+1];
                a[j+1] = temp1;

                temp2 = b[j];
                b[j] = b[j+1];
                b[j+1] = temp2;

                temp3 = c[j];
                c[j] = c[j+1];
                c[j+1] = temp3;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] + sh < sum)
        {
            sh = sh + a[i];
            sp = sp + b[i];
            //printf("1\n");
        }
        else if(a[i] + sh >= sum)
        {
            double t = sum - sh;
            //printf("%d\n",t);
            sp = sp + t*c[i];
            //printf("2\n");
            break;
        }
    }
//    for(int i = 0; i < n; i++)
//    {
//        printf("%lf %lf %lf\n",a[i],b[i],c[i]);
//    }
    printf("%.2lf",sp);
    return 0;
}
