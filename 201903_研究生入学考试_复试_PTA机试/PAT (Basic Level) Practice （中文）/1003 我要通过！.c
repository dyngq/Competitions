#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/**
思路：
一开始半个多小时都无从下手，最后看了题解才明白是一个数学归纳法的简单模拟题，而我想到kmp变形去了。。。
其实读题的时候，看到第三个条件，. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的。。中间增加一个A而右边却增加了一个a，增长呈现线性关系，P和T之间的A的总数增了一个，而T右边却增加了a，我们得以得出数学关系式
a中A的个数*（b中A的个数+1） = c中A的个数+a中A的个数
至此就可以编码了
哦，还有一点细节
*PT中间必须要有A
**/

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        char test[102];
        scanf("%s",test);
        int flag = 0;
        if(strlen(test)<3)
            flag = 1;
        for(int j = 0;j<strlen(test); j++)
        {
            if(test[j]!='P'&&test[j]!='T'&&test[j]!='A')
            {
                flag = 1;
                break;
            }
        }
        //printf("%d\n",flag);
        if(flag==0&&(strstr(test,"PAT")!=0 || strstr(test,"PAAT")!=0))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
