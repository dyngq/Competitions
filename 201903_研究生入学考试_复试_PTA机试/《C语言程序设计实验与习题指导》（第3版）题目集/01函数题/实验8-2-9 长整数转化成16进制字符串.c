#include <stdio.h>
#define MAXN 10

void f( long int x, char *p );

int main()
{
    //printf("%ld %ld %ld",'9','10','A');
    long int x;
    char s[MAXN] = "";

    scanf("%ld", &x);
    f(x, s);
    //printf("%ld", x/16);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void f( long int x, char *p )
{
    int flag = 0;
    long int a,b=x;
    if(x<0)
    {
        b = -x; printf("-");
    }
    if(x==0)
    {
        p[0] = '0';
        return;
    }
    char q[MAXN] = "";
    long int i;
    for(i = 0; ; i++)
    {
        a = b%16;
        b = b/16;

        if(a>9)
        {
            switch(a)
            {
                case 10: q[i] = 'A'; break;
                case 11: q[i] = 'B'; break;
                case 12: q[i] = 'C'; break;
                case 13: q[i] = 'D'; break;
                case 14: q[i] = 'E'; break;
                case 15: q[i] = 'F'; break;
            }
        }
        else
            q[i] = (char)(a+48);
        if(flag == 1)
            break;
        if(b==0)
            flag = 1;
            //break;
        //printf("%c ",p[i]);
        //p = (char)(x/16 +48);
    }
    long int k = 0;
    for(long int j = i-1; j >= 0; j--)
    {
        p[k] = q[j];
        k++;
    }
}
