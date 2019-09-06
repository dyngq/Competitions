#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char c)
{
    switch(c)
    {
        case '-': printf("fu ");break;
        case '0': printf("ling ");break;
        case '1': printf("yi ");break;
        case '2': printf("er ");break;
        case '3': printf("san ");break;
        case '4': printf("si ");break;
        case '5': printf("wu ");break;
        case '6': printf("liu ");break;
        case '7': printf("qi ");break;
        case '8': printf("ba ");break;
        case '9': printf("jiu ");break;
    }
}
void print2(char c)
{
    switch(c)
    {
        case '-': printf("fu");break;
        case '0': printf("ling");break;
        case '1': printf("yi");break;
        case '2': printf("er");break;
        case '3': printf("san");break;
        case '4': printf("si");break;
        case '5': printf("wu");break;
        case '6': printf("liu");break;
        case '7': printf("qi");break;
        case '8': printf("ba");break;
        case '9': printf("jiu");break;
    }
}

int main()
{
    char s[1000];
    scanf("%s",s);
    int n = strlen(s);
    for(int i = 0; i < n-1; i++)
    {
        print(s[i]);
    }
    print2(s[n-1]);

    return 0;
}
