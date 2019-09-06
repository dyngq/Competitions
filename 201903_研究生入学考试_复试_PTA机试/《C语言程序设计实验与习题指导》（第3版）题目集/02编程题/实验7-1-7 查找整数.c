#include <stdio.h>

int main()
{
    int n, t, pos;
    scanf("%d %d",&n, &t);
    int a[n];
    int f = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] == t)
        {
            pos = i;
            f = 1;
        }
    }
    if(f == 1)
    {
        printf("%d",pos);
    }
    else
        printf("Not Found");
}
