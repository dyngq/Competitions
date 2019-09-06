#include <stdio.h>

#define PI 3.14159

int main()
{
    while(1)
    {
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
        int n;
        scanf("%d",&n);
        if(n==1)
        {
            printf("Please enter the radius:\n");
            double r;
            scanf("%lf",&r);
            printf("%.2lf\n",PI*r*r*r*4/3);
        }
        else if(n==2)
        {
            printf("Please enter the radius and the height:\n");
            double r,h;
            scanf("%lf %lf",&r,&h);
            printf("%.2lf\n",PI*r*r*h);
        }
        else if(n==3)
        {
            printf("Please enter the radius and the height:\n");
            double r,h;
            scanf("%lf %lf",&r,&h);
            printf("%.2lf\n",PI*r*r*h/3);
        }
        else
            break;
    }
    return 0;
}
