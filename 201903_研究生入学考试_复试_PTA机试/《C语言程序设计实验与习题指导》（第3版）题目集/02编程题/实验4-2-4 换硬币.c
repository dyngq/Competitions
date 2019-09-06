#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    int count = 0;
    int i;
    if(n%5 == 0)
        i = n/2-1;
    else
        i = n/2;
    for(i; i > 0; i--)
    {
        int si = n - i*5;
        int j;
        if(si%2==0)
            j = si/2 -1;
        else
            j = si/2;
        for(j; j > 0; j--)
        {
            int sj = i*5 + j*2;
            int k = n - sj;
            //printf("%d %d %d\n",i,j,k);
            if(k>0)
            {
                count++;printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
            }


        }
    }
    printf("count = %d",count);

}
