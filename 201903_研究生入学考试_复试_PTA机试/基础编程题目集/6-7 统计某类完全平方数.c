#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
//    for(int i = 600; i <= 676; i++)
//        printf("%d %d\n",i,IsTheNumber(i));
    IsTheNumber(144);
}

/* 你的代码将被嵌在这里 */
int IsTheNumber ( const int N )
{
    int s = sqrt(N);
    int temp;
    int a[10] = {0};
    int flag = 0;
    int n = N;
    if(s*s == n)
    {
        while(n>0)
        {
            temp = n % 10;
            printf("%d ",temp);
            a[temp]++;
            n = n/10;
        }
        printf("\n");
        for(int i = 0; i < 10; i++)
        {
            if(a[i]>1)
                flag = 1;
            printf("%d ",a[i]);
        }
        if(flag == 1)
            return 1;
        if(flag == 0)
            return 0;
    }
    else
        return 0;
}
