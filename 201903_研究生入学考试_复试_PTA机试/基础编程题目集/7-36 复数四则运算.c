#include <stdio.h>

double a1,b1,a2,b2;

void pri(double aa, double bb, char c)
{
    if(b1>=0)
    {
        if(b2>=0)
            printf("(%.1lf+%.1lfi) %c (%.1lf+%.1lfi) = ",a1,b1,c,a2,b2);
        if(b2<0)
            printf("(%.1lf+%.1lfi) %c (%.1lf%.1lfi) = ",a1,b1,c,a2,b2);
    }
    else if(b1<0)
    {
        if(b2>=0)
            printf("(%.1lf%.1lfi) %c (%.1lf+%.1lfi) = ",a1,b1,c,a2,b2);
        if(b2<0)
            printf("(%.1lf%.1lfi) %c (%.1lf%.1lfi) = ",a1,b1,c,a2,b2);
    }
//    printf("(%.1lf+%.1lfi) %c (%.1lf+%.1lfi) = ",a1,b1,c,a2,b2);
//    if(aa*100<5)
//        printf("%.1lfi",b);
    double ja,jb;
    if(aa<0)
        ja = -aa;
    else
        ja = aa;
    if(bb<0)
        jb = -bb;
    else
        jb = bb;
    if(ja*100 < 5)
    {
        if(jb * 100 < 5)
        {
            printf("0.0\n");
        }
        else if(bb > 0)
        {
            printf("%.1lfi\n",bb);
        }
        else if(bb < 0)
        {
            printf("%.1lfi\n",bb);
        }
    }
    else if(ja*100 >= 5)
    {
        if(jb * 100 < 5)
        {
            printf("%.1lf\n",aa);
        }
        else if(bb > 0)
        {
            printf("%.1lf+%.1lfi\n",aa,bb);
        }
        else if(bb < 0)
        {
            printf("%.1lf%.1lfi\n",aa,bb);
        }
    }
}

int main()
{

    scanf("%lf%lf%lf%lf",&a1,&b1,&a2,&b2);
    //printf("%.1lf %.1lf %.1lf %.1lf",a1,b1,a2,b2);

    double a, b;
    a = a1 + a2;
    b = b1 + b2;
    pri(a,b,'+');

    a = a1 - a2;
    b = b1 - b2;
    pri(a,b,'-');

    a = a1*a2 - b1*b2;
    b = a1*b2 + a2*b1;
    pri(a,b,'*');


    a = (a1*a2 + b1*b2)/(a2*a2 + b2*b2);
    b = (a2*b1 - a1*b2)/(a2*a2 + b2*b2);
    pri(a,b,'/');

    //printf("%lf %lf\n",a,b);

    return 0;
}
