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
    //scanf("%d",&n);
    n = 2;
    //FS fs[n];
    FS fsum;
    fsum.fz = 0;
    fsum.fm = 1;
    //int sum = 0;
    //printf("%d\n",zxgb(8,12));
    int gb = 1;
    for(int i = 0; i < n; i++)
    {
        int a,b;
        char c;
        scanf("%d%c%d",&a,&c,&b);
        //b = b * n;
        //fs[i].fz = a;
        //fs[i].fm = b;
        int temp = zxgb(fsum.fm,b);
        fsum.fz = fsum.fz*(temp/fsum.fm) + a*(temp/b);
        fsum.fm = temp;
        int temp2 = zdgy(fsum.fz,fsum.fm);
        fsum.fz = fsum.fz/temp2;
        fsum.fm = fsum.fm/temp2;
//        printf("temp1: %d; temp2: %d\n",temp,temp2);
        printf("%d/%d\n",fsum.fz,fsum.fm);
//        printf("%d\n",fsum.fz/fsum.fm);
//        printf("b: %d ",b);
//        printf("gb: %d\n",gb);
    }
//    printf("gb: %d\n",gb);
    //fsum.fm = fsum.fm*n;
    int gy = zdgy(fsum.fz,fsum.fm);
    //printf("gy: %d\n",gy);
    if((fsum.fz/gy)%(fsum.fm/gy)==0)
    {
        //printf("%d %d\n",(fsum.fz/gy),(fsum.fm/gy));
        printf("%d\n",(fsum.fz/gy)/(fsum.fm/gy));
    }
    else
    {
        printf("%d/%d\n",fsum.fz/gy,fsum.fm/gy);
    }
    //printf("-1/2: %d",-2/2);


    return 0;
}
