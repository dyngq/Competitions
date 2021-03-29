#include <stdio.h>

int main()
{
    for(int i = 10; ;i++)
    {
        if(i%5==1)
            if(i%6==5)
                if(i%7==4)
                    if(i%11==10)
                    {
                        printf("%d",i);
                        return 0;
                    }
    }
}
