#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int x;
            scanf("%d",&x);
            if(i+j != n-1 && i != n-1 && j!= n-1)
                sum = sum + x;
        }
    }
    printf("%d\n",sum);
    return 0;
}
