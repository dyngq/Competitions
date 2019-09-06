#include <stdio.h>

int main()
{
    double f1,f2;
    int n;
    char c;
    scanf("%lf %d %c %lf", &f1, &n, &c, &f2);
    printf("%c %d %.2lf %.2lf",c,n,f1,f2);
    return 0;
}

