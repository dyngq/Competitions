#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[1001] = {0};
    int f[1001] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(f[i] == 0)
            {
                if(a[i] == a[j])
                {
                    b[i]++;
                    f[j] = 1;
                }
            }
        }
    }
    int max = 0, maxn;
    for(int i = 0; i < n; i++)
    {
        if(b[i] > max)
        {
            max = b[i]+1;
            maxn = a[i];
        }
    }
    if(n > 1)
        printf("%d %d",maxn, max);
    else
        printf("%d 1",a[0]);

}
