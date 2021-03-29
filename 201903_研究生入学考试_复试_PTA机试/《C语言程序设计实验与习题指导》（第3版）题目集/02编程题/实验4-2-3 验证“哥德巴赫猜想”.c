#include <stdio.h>
#include <math.h>
int su(int n)
{
    if(n==2)
        return 1;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
//    char s[1000000001];
//    printf("%d",su(n));
//    for(int i = 2; i < 1000000001; i++)
//    {
//        if(su(i)==1)
//            s[i] = '1';
//        else
//            s[i] = '0';
//    }
//    printf("%s",s);
    if(su(n-2)==1)
    {
        printf("%d = %d + %d\n",n,2,n-2);
        return 0;
    }
    if(su(n-3)==1)
    {
        printf("%d = %d + %d\n",n,3,n-3);
        return 0;
    }
    if(su(n-5)==1)
    {
        printf("%d = %d + %d\n",n,5,n-5);
        return 0;
    }
    for(int i = 7; i <= n/2; i++)
    {
        if(i%2!=0 && i%3!=0 && i%5!=0)
        {
            if(su(i)==1 && su(n-i)==1)
            {
                printf("%d = %d + %d\n",n,i,n-i);
                return 0;
            }
        }
    }
}
