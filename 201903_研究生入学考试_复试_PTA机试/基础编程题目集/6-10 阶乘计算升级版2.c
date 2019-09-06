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


void Print_Factorial ( const int N )
{
    int sum[3001] = {0};
    int temp;
    int carry = 0;
    sum[0] = 1;
    int k = 1;//位数
    if(N < 0)
    {
        printf("Invalid input");
        return;
    }
    for(int i = 2; i <= N; i++)
    {
        for(int j = 0; j < k; j++)
        {
            temp = i*sum[j] + carry;
            sum[j] = temp%10;
            carry = temp/10;
        }
        while(carry!=0)
        {
            sum[k] = carry%10;
            carry = carry/10;
            k++;
        }
    }
    for(int i = k-1; i >= 0; i--)
    {
        printf("%d",sum[i]);
    }

}
