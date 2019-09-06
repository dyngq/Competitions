#include <stdio.h>

int main()
{
    int type;
    scanf("%d",&type);
    double sum;
    double hour;
    scanf("%lf",&hour);
    if(type<5)
    {
        sum = hour*30;
        if(hour>40)
            sum = sum + 15*(hour-40);
    }
    else
    {
        sum = hour*50;
        if(hour>40)
            sum = sum + 25*(hour-40);
    }
    printf("%.2lf",sum);
    return 0;
}
