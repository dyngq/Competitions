#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int len = n;
    int i=1,j=1;
    while(1)
    {
        if(len<=1)
            break;
        else
        {
            for(i = 1; i <= n; i++,j++)
            {
                //printf("%d ",i);
                if(a[i] == 1)
                {
                    j--;continue;
                }
                else if(j%3==0)
                {
                    a[i] = 1;
                    len--;
                }
            }
        }
    }
    //printf("%d\n",j);
    for(int k = 1; k <= n; k++)
    {
        if(a[k]!=1)
            printf("%d",k);
    }



    return 0;
}
