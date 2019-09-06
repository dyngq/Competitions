#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int f[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        f[i] = 0;
    }
    int x = 1;
    for(int i = 0; i < n; i++)
    {
        int sum = a[i];
        //printf("%d %d \n",i, f[i]);
        if(f[i] == 0)
        {
            b[i] = x;
            //printf("%d\n",b[i]);
            //printf("1bi: %d\n",i);
            for(int j = i + 1; j < n; j++)
            {
                if(sum + a[j] <= 100 && f[j] == 0)
                {
                    sum = sum + a[j];
                    b[j] = x;
                    //printf("%d\n",f[5]);
                    //printf("2bi: %d\n",j);
                    f[j] = 1;
                }
            }
            x++;
        }
        //printf("\n");

    }
    for(int i = 0; i < n; i++)
    {
        printf("%d %d\n",a[i],b[i]);
    }
    printf("%d",x-1);
    return 0;
}
