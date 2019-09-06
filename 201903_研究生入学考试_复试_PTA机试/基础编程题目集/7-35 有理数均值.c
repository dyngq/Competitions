/** 目前的问题：需要随时化简 **/








#include <stdio.h>
#include <string.h>

typedef struct
{
    int fz;
    int fm;
}FS;

int zxgb(int a, int b)
{
    int i = a<b?a:b;
    //printf("i: %d\n",i);
    for(i; i <= a*b; i++)
    {
        if(i%a==0&&i%b==0)
            return i;
    }
}
int zdgy(int a, int b)
{
    int i = a>b?a:b;
    for(i; i>0; i--)
    {
        if(a%i==0 && b%i==0)
            return i;
    }
}
int main()
{
    //printf("zdgy: %d\n",zdgy(9,6));
    int n;
    scanf("%d",&n);
    FS fs[n];
    int sum = 0;
    //printf("%d\n",zxgb(8,12));
    int gb = 1;
    for(int i = 0; i < n; i++)
    {
        int a,b;
        char c;
        scanf("%d%c%d",&a,&c,&b);
        fs[i].fz = a;
        fs[i].fm = b;
        gb = zxgb(gb,b);
//        printf("b: %d ",b);
//        printf("gb: %d\n",gb);
    }
//    printf("gb: %d\n",gb);

    for(int i = 0; i < n; i++)
    {
        int bei = gb/fs[i].fm;
        sum = sum + fs[i].fz*bei;
        //printf("%d ",fs[i].fz);
    }
    int gy = zdgy(sum,gb*n);
    if((sum/gy)%(gb*n/gy)==0)
    {
        printf("%d\n",(sum/gy)/(gb*n/gy));
    }
    else
    {
        printf("%d/%d\n",sum/gy,gb*n/gy);
    }


    return 0;
}
