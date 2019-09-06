#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t;
    int p;
    int s[11] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&t);
        while(t > 0)
        {
            p = t%10;
            s[p]++;
            t = t/10;
        }
    }
//    for(int i = 0; i < 10; i++)
//    {
//        printf("%d ",i);
//    }
//    printf("\n");
    int max = -1;
    for(int i = 0; i < 10; i++)
    {
        if(s[i] > max)
        {
            max = s[i];
        }

    }
    printf("%d:",max);
    for(int i = 0; i < 10; i++)
    {
        if(s[i] == max)
        {
            printf(" %d",i);
        }
    }
}
