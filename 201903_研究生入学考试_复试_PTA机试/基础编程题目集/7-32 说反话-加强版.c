#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void fanhua(char f[])
{
    if(f==EOF)
    {
        printf("success\n");
        return;
    }
    char oldf[500];
    fanhua(scanf("%s",oldf));
    //printf("%s\n",oldf);
    printf("%s ",oldf);
}

int main()
{
    char a[500000];
    scanf("%s",a);
//    while(scanf("%s",a)!=EOF)
//    {
//        printf("%s\n",a);
//    }
    fanhua(a);

}
