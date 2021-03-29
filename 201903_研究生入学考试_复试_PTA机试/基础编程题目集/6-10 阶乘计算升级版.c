#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */

//long long int Factorial ( long long int N )
//{
//    if(N<=1)
//        return 1;
//    else
//        return N*Factorial(N-1);
//}
//void Print_Factorial ( const int N )
//{
//    long long int n = N;
//    printf("%lld ",n);
//    if(N<0)
//        printf("Invalid input");
//    else
//        //Factorial(n);
//        printf("%lld",Factorial(n));
//}
void Print_Factorial ( const int N )
{
    long long int n=1;
    //long long int nn = N;
    //printf("%lld ",n);
    if(N<0)
        printf("Invalid input");
    else
    {
        for(long long int i = 1; i <= N; i++)
        {
            n = n * i;
        }
        printf("%lld",n);
    }//Factorial(n);

}
