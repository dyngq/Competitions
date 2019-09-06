#include <stdio.h>

int exchange(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int a = 6, b = 4;
    exchange(&a,&b);
    printf("%d %d",a,b);
}
