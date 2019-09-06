#include <stdio.h>

int main()
{
    double a;
    scanf("%le",&a);
    int s = -2;
    double t;
    double sum = 0;
    for(int i = 0; ; i++)
    {
        s = s + 3;
        t = 1.0/s;
        if(i%2==0)
        {
            sum = sum + t;
            if(t<=a)
                break;
        }
        else if(i%2==1)
        {
            sum = sum - t;
            if(t<=a)
                break;
        }

    }
    printf("sum = %.6lf",sum);
}
