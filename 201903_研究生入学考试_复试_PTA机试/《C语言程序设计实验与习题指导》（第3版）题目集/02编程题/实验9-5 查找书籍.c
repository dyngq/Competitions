#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n==0)
    {
        printf("0.00, \n");
        printf("0.00, \n");
        return 0;
    }


    char smax[40],smin[40];
    double max = -1,min = 1000000; /**此处max应该等于-1 如果是0就会出错**/
    char stemp[40];
    double temp;
    for(int i = 0; i < n; i++)
    {
        getchar();
        gets(stemp);
        scanf("%lf",&temp);

        //printf("%s %lf",stemp,temp);


        if(temp > max)
        {
            strcpy(smax,stemp);
            max = temp;
        }
        if(temp < min)
        {
            strcpy(smin,stemp);
            min = temp;
        }
    }

    printf("%.2lf, %s\n",max,smax);
    printf("%.2lf, %s\n",min,smin);
}
