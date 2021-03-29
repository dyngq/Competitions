#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAXN 1000

int issushu(int a)
{
	int r = sqrt(a);
	//printf("%d",a);
	int flag = 0;
	for (int i = 2; i <= r; i++)
	{
		if (a%i == 0)
		{
			flag = 1;
			break;
		}
	}
	//printf("%d",flag);
	if (flag == 1 || a == 0 || a == 1)
		return 1;
	else
		return 0;
}

int main()
{
	//printf("%d",issushu(4));
	int n, k;
	char s[MAXN];
	int su;
	scanf("%d%d", &n, &k);
	scanf("%s", s);
	int flag2 = 0;
	for (int i = 0; i < n - k + 1; i++)
	{
		su = 0;
		for (int j = i; j < k + i; j++)
		{
			su = su + ((int)s[j] - 48) * pow(10, k - j + i - 1);
			//printf("%lf\n",pow(10,j));
			//printf("%d ",(int)s[j]-48);
		}
		//printf("\n");
		//printf("%d\n", su);
		if (issushu(su) == 0)
		{
			for (int ii = 0; ii < k; ii++)
			{
				if (su < pow(10, ii))
					printf("0");
			}
			printf("%d", su);
			flag2 = 1;
			break;
		}
	}
	if (flag2 == 0)
		printf("404");

	return 0;
}
