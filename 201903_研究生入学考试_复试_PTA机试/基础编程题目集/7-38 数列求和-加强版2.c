#include <stdio.h>
#include <string.h>

int main()
{
//    long long int a;
//    a = 1000000000000;
//    //scanf("%d",&a);
//    printf("%lld",a);
    int a,n;
    scanf("%d%d",&a,&n);
    int sum[100000]={0};
    int carry = 0;
    int temp = 0;
    int i;
    for(i = 0; i < n; i++)
    {
        temp = (n-i)*a + carry;
        sum[i] = sum[i] + temp%10;

        if(temp>=10)
            carry = temp/10;
        else if(temp<10)
            carry = 0;
        //printf("%d %d %d\n",temp,sum[i],carry);
    }
    if(carry>0)
    {
        sum[n] = carry;/**忘了这一步：如果最高位也需要进位**/
        i++;
    }

    //printf("%d\n",i);
    for(int j = i-1; j >= 0; j--)
    {
        //printf("%d ",j);
        printf("%d",sum[j]);
    }
    if(a==1&&n==0)
        printf("0");


    return 0;
}
