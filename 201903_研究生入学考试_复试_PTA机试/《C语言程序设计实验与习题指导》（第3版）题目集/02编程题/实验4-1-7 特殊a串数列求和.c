#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double a = 1, b = 1;
    double t;
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        t = a;
        a = a + b;
        b = t;
        sum = sum + a/b;
    }
    printf("%.2lf",sum);

}
