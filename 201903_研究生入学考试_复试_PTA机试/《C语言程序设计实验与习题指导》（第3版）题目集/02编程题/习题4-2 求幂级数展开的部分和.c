#include <stdio.h>
#include <math.h>

/**ȫ����doubleʱ�� ���n��ͨ���ˣ� double������΢����һ�·�Χ�� �Ժ���Գ���**/

double jie(double a)
{
    double sum = 1;
    for(int i = 2; i <=a; i++)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{
    double sum = 1;
    double kang;
    kang = 1;
    double x;
    scanf("%lf",&x);
    for(int  i = 1; kang >= 0.00001; i++)
    {
        kang = pow(x,i)/jie(i);
        sum = sum + kang;
        //printf("%lf",sum);
    }
    printf("%.4lf",sum);
}
