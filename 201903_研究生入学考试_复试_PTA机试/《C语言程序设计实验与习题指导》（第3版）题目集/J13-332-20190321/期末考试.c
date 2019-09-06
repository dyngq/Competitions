#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define p 3.14159
int main()
{
    double s,r,R;
    scanf("%lf%lf",&r,&R);
    s=p*R*R-p*r*r;
    printf("%.3lf",s);
    return 0;
}

/**************************************************************
    Problem: 1761
    User: 201501060119
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:952 kb
****************************************************************/









#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    double n,sum=0;
    while (scanf("%lf",&n)!=EOF)
    {
        sum=sum+n;
    }
        if(sum<399)
        {
            sum=sum;
        }

        else if(sum<899&&sum>=399)
        {
           sum=sum*0.95;
        }
        else if(sum<2499&&sum>=899)
        {
            sum=sum*0.9;
        }
        else if(sum<4899&&sum>=2499)
        {
            sum=sum*0.85;
        }
        else if(sum>=4899)
        {
            sum=sum*0.8;
        }
        sum=(int)sum;

    printf("%.2lf",sum);
    return 0;
}

/**************************************************************
    Problem: 1762
    User: 201501060119
    Language: C
    Result: Accepted
    Time:4 ms
    Memory:748 kb
****************************************************************/








#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int k,i,n,m,x,y,a=0,c,r;
    scanf("%d",&k);
    for (i=0;i<k;i++)
    {
        scanf("%d%d",&n,&m);
        for (x=0;x<=500;x++)
        {
            for (y=0;y<=500;y++)
            {
                if(x*2+y*4==m&&x+y==n)
                {
                    a++;
                    c=x;
                    r=y;
                }
            }
        }
        if(a==1)
        {
            printf("%d %d",c,r);
        }
        if(a==0)
            printf("no result");
        printf("\n");
        a=0;
    }

    return 0;
}

/**************************************************************
    Problem: 1763
    User: 201501060119
    Language: C
    Result: Accepted
    Time:8 ms
    Memory:952 kb
****************************************************************/






















#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 10002
typedef struct
{
    int length;
    int array[MAX_SIZE];
}ARR_TYPE;
int input_arr(ARR_TYPE *arr)
{
    int i=0;
    scanf("%d",&arr->length);
    for(i=0;i<arr->length;i++)
    {
        scanf("%d",&arr->array[i]);
    }
}
int output_arr(ARR_TYPE arr)
{
    int j=0;
    printf("%d",arr.array[0]);
    for(j=1;j<arr.length;j++)
    {
        printf(" %d",arr.array[j]);
    }
}
int main()
{
   ARR_TYPE arr;
   input_arr(&arr);
   output_arr(arr);
    return 0;
}
/**************************************************************
    Problem: 1494
    User: 201501060119
    Language: C
    Result: Accepted
    Time:4 ms
    Memory:952 kb
****************************************************************/




















#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char s[101],c[101];
    int a=0,i,j,k,m;
    scanf("%s",s);
    while(scanf("%s",c)!=EOF)
    {
        a++;
        i=strlen(c);
        k=strlen(s);
        for(j=0;j<i;j++)
        {
            if(c[j]>=65&&c[j]<=90)
            {
                c[j]=c[j]+32;
            }
        }
        for(m=0;m<k;m++)
        {
            if(s[m]>=65&&s[m]<=90)
            {
                s[m]=s[m]+32;
            }
        }
        if(a>5)
        {
            printf("Out of limited!\n");
        }
        else if(strcmp(s,c))
        {
            printf("Wrong!\n");
        }
        else
        {
            printf("Welcome!\n");
            break;
        }

    }
}

/**************************************************************
    Problem: 1766
    User: 201501060119
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:748 kb
****************************************************************/






















#include <stdio.h>
int a,b,c=0,k=0;
int dg(int n)
{
    if(k>=1)
    {
        scanf("%d",&a);
        c=c+a;
        k=k-1;
        dg(a);
    }
    return c;
}
int main ()
{
    scanf("%d",&k);
    dg(a);
    printf("%d",c);
    return 0;
}

/**************************************************************
    Problem: 1764
    User: 201501060119
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:952 kb
****************************************************************/






