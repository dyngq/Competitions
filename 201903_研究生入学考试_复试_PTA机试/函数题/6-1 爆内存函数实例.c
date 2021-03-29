#include <stdio.h>
void PrintN(long n);

int main()
{
    PrintN(66000L);
    return 0;
}


//void PrintN(long n) {
//    for(long i = 1; i <= n; ++i)
//        printf("%ld", i);
//}

void PrintN(long n)
{
    if( n == 1 )
        printf("1");
    else
    {
        PrintN(n-1);
        printf("%d", n);
    }
}
