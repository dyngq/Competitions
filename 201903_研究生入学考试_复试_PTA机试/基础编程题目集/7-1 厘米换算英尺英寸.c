#include <stdio.h>

int main()
{
    int cm,foot,inch;
    scanf("%d",&cm);
    double a = (double)cm/30.48;
    //printf("%llf\n",a);
    foot = (int)a;
    inch = (a-foot)*12;
    printf("%d %d",foot,inch);
    return 0;
}
