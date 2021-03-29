#include <stdio.h>

int main()
{
    int temp;
    scanf("%d",&temp);
    int hour,sec;
    hour = temp/100;
    sec = temp%100;
    //printf("%d %d\n",hour,sec);
    int add;
    scanf("%d",&add);
    int sum = hour*60 + sec + add;
    hour = sum/60;
    sec = sum%60;
    printf("%d%02d",hour,sec);
    return 0;
}
