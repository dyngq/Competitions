#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[6],b[11];
    int c,d,e;
    char a1[6],b1[11];
    int sum = 0;
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d %d",a,b,&c,&d,&e);
        if(c+d+e > sum)
        {
            sum = c + d + e;
            strcpy(a1,a);
            strcpy(b1,b);
        }
    }
    printf("%s %s %d",b1,a1,sum);
}
