/**pow�������ù���ξͻ����ʱ�䳬ʱ ����ֻ��Ҫ�洢0~9��n�˷� ���Կ�����ǰ���**/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a = 1;
    a = pow(10,n-1);
    int p[10];
    for(int i = 0; i < 10; i++)
    {
        p[i] = pow(i,n);
    }
    int b = a*10 - 1;
    //printf("%d %d\n",a,b);
    int t;
    int x;
    double sum = 0;
    for(int i = a; i <= b; i++)
    {
        x = i;
        for(int j = 0; j < n; j++)
        {
            t = x%10;
            sum = sum + p[t];
            if(sum > i)
                break;
            x = x/10;
        }
        if(sum == i)
        {
            printf("%d\n",i);
        }
        sum = 0;
    }
}
