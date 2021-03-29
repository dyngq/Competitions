#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t[n];
    for(int i = 0; i < n; i++)
    {

        scanf("%d", &t[i]);

    }
    for(int i = n-1; i > 0; i--)
    {

        printf("%d ", t[i]);

    }
    printf("%d",t[0]);

}
