#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    //printf("%d %d",'0','9'); /** 48 57 **/
    //printf("%d %d",'a','z'); /** 97 122 **/
    //printf("%d %d",'A','Z'); /** 65 90 **/
    double sum = 0;
    double s[82];
    char temp[82];
    gets(temp);
    int tl = strlen(temp) - 1;
    int n = 0;
    int flag = 0;
    int ff = 0;
    int f0 = 0;
    for(int i = 0; i < tl; i++)
    {
        if(temp[i] == '-' && flag == 0)
        {
            f0 = 1;flag = 1;
        }
        if(temp[i] >= '0' && temp[i] <= '9')
        {
            s[n] = (int)temp[i] - 48;
            n++;
            flag = 1;
            ff = 1;
        }
        else if(temp[i] >= 'A' && temp[i] <= 'F')
        {
            s[n] = (int)temp[i] - 55;
            n++;
            flag = 1;
            ff = 1;
        }
        else if(temp[i] >= 'a' && temp[i] <= 'f')
        {
            s[n] = (int)temp[i] - 32 - 55;
            n++;
            flag = 1;
            ff = 1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        sum = sum + s[i]*pow(16,n-i-1);
        //printf("%.0lf ",s[i]);
    }
    if(f0 == 1 && ff == 1)
        printf("-");
    //printf("%s\n",s);
    printf("%.0lf",sum);
    return 0;
}
