#include <stdio.h>

int main()
{
    int n;
    //n = 123456789;
    scanf("%d",&n);
    int a[10];
    a[1] = n/100000000%10;
    a[2] = n/10000000%10;
    a[3] = n/1000000%10;
    a[4] = n/100000%10;
    a[5] = n/10000%10;
    a[6] = n/1000%10;
    a[7] = n/100%10;
    a[8] = n/10%10;
    a[9] = n%10;
    int z[10] = {' ','Y','Q','B','S','W','Q','B','S'};
    char s[10];
    for(int i = 1; i <=9; i++)
    {
        s[i] = (char)(a[i]+48+49);
        //printf("%c ",s[i]);
//        printf("\n%d %d\n",'a','1');
    }
    int flag = 0;
    //int f1 = 0, f2 = 0;
    for(int i = 1; i < 9; i++)
    {
        if(a[i]!=0)
        {
            //flag++;
            //f2 = 0;

            printf("%c%c",s[i],z[i]);
        }
        else
        {
            flag++;
            //printf("\n%d %d %d %d %d\n",flag,i,a[i-1],a[i],a[i+1]);
            if(i!=5&&flag<i&&a[i+1]!=0)
                printf("a");
            if(i==5&&flag<i&&a[6]==0&&a[9]==0&&a[7]==0&&a[8]==0)
                printf("W");
            //f1 = 0;
        }

    }
    if(a[9] == 0)
    {
        if(flag >= 8)
            printf("a");
    }
    else
        printf("%c",s[9]);
    //printf("%d %d\n",n,a1);
    //printf("%d\n")
    return 0;
}
