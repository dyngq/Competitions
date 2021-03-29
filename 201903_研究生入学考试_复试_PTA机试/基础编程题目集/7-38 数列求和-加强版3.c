#include <stdio.h>
#include <string.h>
#include <math.h>
 int main()
{
 int A;
 int N;
 int i;
 int j;
 int t;
 int flag;
 int num[100000];
 scanf("%d%d",&A,&N);
 if(N == 0)
 printf("0\n");
 else
 {
      flag = 0;
      for(i=N, j=0; i>=1; i--, j++) //这里一开始我不清楚j++的意思，后来分析结果是先逐个把位数相加，有进位就进位
       {

            t = A*i + flag;

            flag = t / 10;

            num[j] = t % 10;

        }

         if(flag > 0)//最后一位进位还有的话再进一位
         {
           num[j] = flag; //
           j++;
         }

       for(i=j-1; i>=0; i--) //之前一直都是反向输入  个十百千万。。先要换回万千百十个//特别注意j-1，因为之前最后一次多加了一位//其实我在考虑要不要换成1000001

        {
            printf("%d",num[i]);
        }

  }

    return 0;

  }
