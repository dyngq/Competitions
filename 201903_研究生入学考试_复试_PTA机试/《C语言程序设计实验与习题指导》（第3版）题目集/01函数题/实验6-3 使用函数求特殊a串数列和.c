#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));
    printf("s = %d\n", SumA(a,n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int fn( int a, int n )
{
    int x = 0;
    for(int i = 0; i < n; i++)
    {
        x = x*10 + a;
    }
    return x;
}
int SumA( int a, int n )
{
    int sum = 0;
    for(int i = 1;i <= n; i++)
    {
        sum = sum + fn(a,i);
    }
    return sum;
}


#include <string.h>
void StringCount( char s[] )
{
    int l = 0,b = 0,d = 0,o = 0;
    int n = strlen(s);
    for(int i = 0; i < n; i++)
    {
        if( (s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z') )
            l++;
        else if(s[i] == ' ' || s[i] == '\n')
            b++;
        else if(s[i]>='0' && s[i]<='9')
            d++;
        else
            o++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",l,b,d,o);
}

















