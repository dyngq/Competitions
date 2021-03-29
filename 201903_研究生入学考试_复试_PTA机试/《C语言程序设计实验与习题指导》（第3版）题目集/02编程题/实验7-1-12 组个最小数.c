#include <stdio.h>

int main()
{
//    int n;
//    scanf("%d",&n);
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0] > 0)
    {
        for(int i = 1; i < 10; i++)
        {
            if(a[i] > 0)
            {
                printf("%d",i);
                a[i] = a[i] - 1;
                break;
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < a[i]; j++)
            printf("%d",i);
    }
    return 0;
}
