#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m1 = 1,m2=0,m3=0;

    int sum,t;
    if(n==1)
    {
        printf("1");return 0;
    }

    for(int i = 2;i<50;i++)
    {
        //t = m3;
        m3 = m3+m2;
        m2 = m1;
        m1 = m3;
//        printf("%d: %d %d %d %d\n",i,m1,m2,m3,m1+m2+m3);

        if(m1+m2+m3>=n)
        {
            printf("%d",i);
            return 0;
        }

    }
}
/**

1 1
2 1
3 1 2
4 1 2 3
5 1 2 3 4
6 1 2 3 4 2


**/
