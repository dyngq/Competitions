#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    //printf("%d",a/2);
    int ff = 0;
    for(int n = a; n <= b; n++)
    {
        int nn = n;
        int x[n];
        int k = 0;
        int sum = 0;
        int f = 0;
        int time = 0;
        while(1)
        {
            if(nn%2==0)
            {
                x[k] = nn/2;
                sum = sum + x[k];
                k++;
                nn = nn/2;
            }
            else if(nn%2==1)
            {
                x[k] = nn/2 + 1;
                sum = sum + x[k];
                k++;
                nn = nn/2 + 1;
            }
            //printf("%d : %d\n",n,nn);
            if(sum==n)
            {//printf("1\n");
                f = 1;break;
            }
            if(nn==1)
            { //printf("2\n");
                break;
            }

        }
        if(f == 1)
        {
            ff = 1;
            printf("%d :",n);
            for(int kk = 0; kk < k; kk++)
            {
                printf("%d ",x[kk]);
            }
            printf("\n");
        }
    }
    if(ff = 0)
    {
        printf("None");
    }

}
