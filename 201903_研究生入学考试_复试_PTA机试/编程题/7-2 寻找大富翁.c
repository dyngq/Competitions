#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int p[n];
    for(int i = 0; i < n; i++)
    {
        int t;
        scanf("%d",&p[i]);
    }

    int q[m];
    int temp = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(p[i] < p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    //printf("%d",p[0]);
    for(int i = 0; i < m-1; i++)
    {
        int t;
        if(p[i] > 0)
            printf("%d ",p[i]);
    }
    if(p[m-1]>0)
        printf("%d",p[m-1]);
    return 0;
}
