#include <stdio.h>

int zdgy(int a, int b)
{
    int i = a>b?a:b;
    for(i; i>0; i--)
    {
        if(a%i==0 && b%i==0)
            return i;
    }
    //for()
}

int main()
{
    int a,b;
    //printf("%d\n",zdgy(2,3));
    char c;
    scanf("%d%c%d",&a,&c,&b);
//    if(a%b==0)
//        printf("%d",a/b);
//    else
//    {
        int k = zdgy(a,b);
        printf("%d/%d",a/k,b/k);
//    }


    return 0;
}
