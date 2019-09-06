#include <stdio.h>

int main()
{
    double m;
    int n;
    scanf("%lf %d",&m,&n);
    if(n==0)
    {
        printf("0.0 0.0");
        return 0;
    }
    double dis = m;
    for(int i = 1; i < n; i++)
    {
        m = m/2;
        dis = dis + m*2;
    }
    printf("%.1lf %.1lf", dis, m/2);
}
