#include<stdio.h>
#define MAX_STR_LEN 1005
char* str_upr(char *s)
{
   char str[MAX_STR_LEN];
   int i;
   char *p=s;
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]>='a'&&s[i]<='z')
         s[i]=s[i]-32;
   }
   s[i]='\0';
   return p;


}

int main()
{
    char str[MAX_STR_LEN], *p;
    while(gets(str) != NULL)
    {
        p = str_upr(str);
        puts(p);
        puts(str);
    }
}
