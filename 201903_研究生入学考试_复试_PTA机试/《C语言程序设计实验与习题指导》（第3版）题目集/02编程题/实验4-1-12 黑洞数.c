#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a = n/100;
    int b = n/10%10;
    int c = n%10;
    int t;

    if(a > b){t = a;a = b;b = t;}
    if(a > c){t = c;c = a;a = t;}
    if(b > c){t = c;c = b;b = t;}
    int min = a*100 + b*10 + c;
    int max = c*100 + b*10 + a;

    if(max - min == 495)
    {
        printf("1: %d - %d = 495",max,min);
        return 0;
    }
    int time = 0;
    while(1)
    {
        time++;
        int cha = max-min;
        printf("%d: %d - %d = %d\n",time,max,min,cha);
        if(cha == 495)
            return 0;
        a = cha/100;
        b = cha/10%10;
        c = cha%10;
        if(a > b){t = a;a = b;b = t;}
        if(a > c){t = c;c = a;a = t;}
        if(b > c){t = c;c = b;b = t;}
        min = a*100 + b*10 + c;
        max = c*100 + b*10 + a;
    }
}
