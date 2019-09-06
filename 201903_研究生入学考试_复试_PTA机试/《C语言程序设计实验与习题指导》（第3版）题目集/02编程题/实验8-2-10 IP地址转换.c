#include <stdio.h>
#include <math.h>

int main()
{
    char s[32];
    scanf("%s",s);
    int a[4] = {0};
    //printf("%s %c %c\n", s, s[0], s[31]);
    for(int i = 0; i < 4; i++)
    {
        a[i] = 0;
        for(int j = 0; j < 8; j++)
        {
            a[i] = a[i] + ((int)(s[i*8+j]-48))*pow(2,7-j);
            //printf("%d ",a[i]);
            //printf("%d ",i*8+j);
        }
    }
    printf("%d.%d.%d.%d",a[0],a[1],a[2],a[3]);
    return 0;
}
