#include <stdio.h>

int main()
{
    int n,u,d;
    scanf("%d%d%d",&n,&u,&d);
    int sum = 0;
    int i = 0;
    while(sum < n)
    {
        i++;
        if(i%2==1)
            sum = sum + u;
        else
            sum = sum - d;
    }
    printf("%d",i);
    return 0;
}
