#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double s;
    double ave = 0, max = -1, min = 101;
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&s);
        ave = ave + s/n;
        if(s > max)
            max = s;
        if(s < min)
            min = s;
    }
    printf("average = %.2lf\n",ave);
    printf("max = %.2lf\n",max);
    printf("min = %.2lf\n",min);
}
