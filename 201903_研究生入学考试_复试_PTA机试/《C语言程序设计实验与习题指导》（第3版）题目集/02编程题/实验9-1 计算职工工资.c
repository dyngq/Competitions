#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char name[12];
    double a,b,c;
    //double ac;
    for(int i = 0; i < n; i++)
    {
        scanf("%s %lf %lf %lf",name, &a, &b, &c);
        //ac = a + b - c;
        printf("%s %.2lf\n",name,a+b-c);
    }
}
