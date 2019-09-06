#include <stdio.h>
#include <math.h>
double jie(int n)
{
    double s = 1;
    for(int i = n; i > 1; i--)
    {
        s = s/i;
    }
    return s;
}

int main()
{
    int n;
    scanf("%d",&n);
    double a = 1;
    if(n==0)
    {
        printf("%.8lf",a);return 0;
    }
    for(int i = 1; i <= n; i++)
    {
        double s = jie(i);
        a = a + s;
        if(s < 0.0000000001)
            break;
    }
    printf("%.8lf",a);

}
