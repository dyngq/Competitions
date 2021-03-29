#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
bool palindrome( char *s )
{
    //xyzazyx
    int flag = 0;
    int n = strlen(s);
    //printf("%d\n",n);
    for(int i = 0; i < n/2; i++)
    {
        //printf("%c %c\n",s[i],s[n-i-1]);
        if(s[i] != s[n-i-1])
            flag = 1;
    }

//    else if(n%2==1)
//    {
//        for(int i = 0; i < n/2; i++)
//        {
//            printf("%c %c\n",s[i],s[n-i-1]);
//            if(s[i] != s[n-i-1])
//                flag = 1;
//        }
//    }
    if(flag == 0)
    {
        //printf("Yes\n");
        return true;
    }
    else
    {
        return false;//printf("No\n");
    }
}
