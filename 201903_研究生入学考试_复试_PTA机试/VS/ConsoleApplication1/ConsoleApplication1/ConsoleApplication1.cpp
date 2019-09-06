// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

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




// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
