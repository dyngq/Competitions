#include <stdio.h>

int main()
{
    int y=0,f=0,n;
    scanf("%d",&n);
    /**     f*100 + y - n = 2*y*100 + 2*f;     **/
    /**     98f - 199y = n;     **/
    int flag = 0;
    for(y = 0; y<100; y++)
    {
        for(f = 0; f<100; f++)
        {
            //printf("%d %d %d %d\n",y,f,f*100+y-n,200*y+2*f);
            if(f*100+y-n == 200*y+2*f)
            {
                flag = 1;break;
            }
        }
        if(flag == 1)
            break;
    }
    //f = 51;y = 25;
    //printf("%d %d\n",f*100+y-n,200*y+2*f);
    if(flag==1)
        printf("%d.%d",y,f);
    else
        printf("No Solution");
    return 0;
}
