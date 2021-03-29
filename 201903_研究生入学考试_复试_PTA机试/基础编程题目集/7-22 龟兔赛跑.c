#include <stdio.h>
/** 乌龟一直勤勤恳恳， 不管哪个地方 不管什么条件 都必须  w=w+3; **/
int main()
{
    int r=0,w=0;
    int time;
    //time = 242;
    scanf("%d",&time);
    int sus=0;
    int s_flag = 0;
    for(int i = 1; i <= time; i++)
    {
        sus--;
        if(sus<=0)
        {
            s_flag=0;
        }
        if(i%10 == 1)
        {
            if(r>w && s_flag==0)
            {
                sus = 30;
                s_flag = 1;
            }
            //printf("\n");
        }
        if(sus <= 0)
        {
            r = r + 9;
        }
        w = w + 3;
//        printf("%d ",i);
        //printf("%d :   %d %d %d\n",i,r,w,sus);
    }
    //printf("%d %d")
    if(r == w)
        printf("-_- %d",r);
    else if(r < w)
        printf("@_@ %d",w);
    else if(r > w)
        printf("^_^ %d",r);

    return 0;
}
