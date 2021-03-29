#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    //printf("%d %d")
    char s[82];
    gets(s);
    //scanf("%s",s);
    int n = strlen(s);
    int a[20];
    int j = 0;
    int flag = 0;
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            //a[j] = (int)(s[i]-48);
            if(s[i]!= '0')
                flag = 1;
            if(s[i] == '0' && flag == 0)
                ;
            else
                printf("%c",s[i]);
            //j++;

        }
    }
    if(flag==0)
        printf("0");
    //printf("\n%d\n",j);
//    for(int k = 0; k < j; k++)
//    {
//        printf("%d",a[k]);
//        //sum = sum + (double)a[k]*pow(10,j-k-1);
//    }
    //printf("\n");
    //printf("%.0lf",sum);
    return 0;
}
