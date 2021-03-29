#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 1000

void print_p(int k)
{
    switch(k)
    {
        case 0:printf(" ling");break;
        case 1:printf(" yi");break;
        case 2:printf(" er");break;
        case 3:printf(" san");break;
        case 4:printf(" si");break;
        case 5:printf(" wu");break;
        case 6:printf(" liu");break;
        case 7:printf(" qi");break;
        case 8:printf(" ba");break;
        case 9:printf(" jiu");break;
    }
}
void print_f(int k)
{
    switch(k)
    {
        case 0:printf("ling");break;
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");break;
    }
}
int main()
{
    char s[MAXN];
    scanf("%s",s);
    int sum = 0;
    for(int i = 0;s[i];i++)
    {
        sum = sum + (int)s[i]-48;
        //printf("%d",(int)s[i]-48);
    }
    int d[1000];
//    char c[100];
//    itoa(sum,c,100);
    int i = 0;
    for(i = 0;sum>0 ;i++)
    {
        d[i] = sum%10;
        sum = sum/10;
        //printf("%d",d[i]);
    }
    print_f(d[i-1]);
    for(int j = i-2; j >= 0; j--)
    {
        print_p(d[j]);
        //printf("%d",d[j]);

    }
    //printf("%d",sum);
//    printf("%d",(int)s[0]-48);
//    printf("%d",(int)s[1]-48);
//    printf("%d",(int)s[2]-48);
}

