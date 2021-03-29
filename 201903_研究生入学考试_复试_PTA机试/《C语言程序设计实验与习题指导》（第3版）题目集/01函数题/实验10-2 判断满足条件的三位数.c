#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));

    return 0;
}


/* 你的代码将被嵌在这里 */
int search( int n )
{
    int sum = 0;
    for(int i = 101; i <= n; i++)
    {
        int q = sqrt(i);
        if(q*q == i)
        {
            int a,b,c;
            int flag = 0;
            a = i / 100;
            b = i % 100 / 10;
            c = i % 10;
            //printf("%d %d %d\n",a,b,c);
            if(a==b)
                flag++;
            if(a==c)
                flag++;
            if(b==c)
                flag++;
            if(flag >= 1)
                sum++;
        }
    }
    return sum;
}
