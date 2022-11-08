#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//某个小学老师请你为她编写一个能够自动生成四则运算练习题的小程序，要求输入年级和题目数量，程序根据年级输出规定数量的题目，具体要求如下：
//一年级运算数为20以内，只生成加法或减法运算式，结果小于20
//二年级运算数为50以内，生成加法和减法混合运算式，结果小于50
//三年级运算数为1000以内，生成加法、减法和乘法混合运算式
//四到六年级运算数为非负整数，生成至少带有三个运算符（从加减乘除四个符号中任选三个）和括号的混合运算式，结果不能为负数
void main()
{
	int grade, problemnum, i;
	printf("请输入年级\n");
	scanf("%d", &grade);
	printf("请输入题目数量\n");
	scanf("%d", &problemnum);
	printf("\n");
	srand((unsigned int)(time(NULL)));
	float answer;
	if (grade == 1)
	{

		if (problemnum % 2 == 0)
		{
			for (i = 1; i <= problemnum / 2; i++)
			{
				int a = rand() % 10 + 1;
				int b = rand() % 10 + 1;
				printf("%d+%d=?\n", a, b);
			}

			for (i = 1; i <= problemnum / 2; i++)
			{
				int a = rand() % 20 + 1;
				int b = rand() % 20 + 1;
				if (a > b)
					printf("%d-%d=?\n", a, b);
				else
					printf("%d-%d=?\n", b, a);
			}
		}
		else//根据problemnum的奇偶性来决定出加法和减法的数量
		{
			for (i = 1; i <= (problemnum-1) / 2; i++)
			{
				int a = rand() % 10 + 1;
				int b = rand() % 10 + 1;
				printf("%d+%d=?\n", a, b);
			}

			for (i = 1; i <= (problemnum+1 / 2); i++)
			{
				int a = rand() % 20 + 1;
				int b = rand() % 20 + 1;
				if (a > b)
					printf("%d-%d=?\n", a, b);
				else
					printf("%d-%d=?\n", b, a);
			}
		}
	}
if (grade == 2)
{
	if (problemnum % 2 == 0)
	{
		for (i = 1; i <= problemnum/2; i++)
		{
			int a = rand() % 25 + 1;
			int b = rand() % 25 + 1;
			int c = rand() % 10 + 1;
			printf("%d+%d-%d=?\n\n", a, b, c);
		}
		for (i = 1; i <= problemnum / 2; i++)
		{
			int a = rand() % 30 + 1;
			int b = rand() % 20 + 1;
			int c = rand() % 20 + 1;
			printf("%d-%d+%d=?\n\n", a, b, c);
		}
	}
	else
	{
		for (i = 1; i <= (problemnum - 1) / 2; i++)
		{
			int a = rand() % 25 + 1;
			int b = rand() % 25 + 1;
			int c = rand() % 10 + 1;
			printf("%d+%d-%d=?\n\n", a, b, c);
		}
		for (i = 1; i <= (problemnum + 1 / 2); i++)
		{
			int a = rand() % 30 + 1;
			int b = rand() % 20 + 1;
			int c = rand() % 20 + 1;
			printf("%d-%d+%d=?\n\n", a, b, c);
		}
	}
}
if (grade == 3)
{
	if (problemnum % 2 == 0)
	{
		for (i = 1; i <= problemnum / 2; i++)
		{
			int a = rand() % 500 + 1;
			int b = rand() % 500 + 1;
			int c = rand() % 200 + 1;
			int d = rand() % 100 + 1;
			printf("(%d+%d-%d)*%d=?\n\n", a, b, c, d);
		}
		for (i = 1; i <= problemnum / 2; i++)
		{
			int a = rand() % 500 + 1;
			int b = rand() % 500 + 1;
			int c = rand() % 200 + 1;
			int d = rand() % 100 + 1;
			printf("(%d*%d+%d)+%d=?\n\n", a, b, c, d);
		}
	}
	else
	{
		for (i = 1; i <= (problemnum - 1 )/ 2; i++)
		{
			int a = rand() % 500 + 1;
			int b = rand() % 500 + 1;
			int c = rand() % 200 + 1;
			int d = rand() % 100 + 1;
			printf("(%d+%d-%d)*%d=?\n\n", a, b, c, d);
		}
	
		for (i = 1; i <= (problemnum - 1) / 2; i++)
		{
		int a = rand() % 500 + 1;
		int b = rand() % 500 + 1;
		int c = rand() % 200 + 1;
		int d = rand() % 100 + 1;
		printf("(%d*%d+%d)+%d=?\n\n", a, b, c, d);
		}
	}
}
if (grade>=4&&grade<=6)
{
	if (problemnum % 2 == 0)
	{
		for (i = 1; i <= problemnum / 2; i++)
		{
			int a = rand() % 500 + 1;
			int b = rand() % 500 + 1;
			int c = rand() % 200 + 1;
			int d = rand() % 100 + 1;
			printf("%d*%d/%d+%d=?\n\n", a, b, c, d);
		}
		for (i = 1; i <= problemnum / 2; i++)
		{
			int a = rand() % 500 + 1;
			int b = rand() % 500 + 1;
			int c = rand() % 200 + 1;
			int d = rand() % 100 + 1;
			printf("%d+%d/%d*%d=?\n\n", a, b, c, d);
		}
	}
	else
	{
		for (i = 1; i <= problemnum-1 / 2; i++)
		{
			int a = rand() % 500 + 1;
			int b = rand() % 500 + 1;
			int c = rand() % 200 + 1;
			int d = rand() % 100 + 1;
			printf("%d*%d/%d+%d=?\n\n", a, b, c, d);
		}
		for (i = 1; i <= problemnum+1 / 2; i++)
		{
			int a = rand() % 500 + 1;
			int b = rand() % 500 + 1;
			int c = rand() % 200 + 1;
			int d = rand() % 100 + 1;
			printf("%d+%d/%d*%d=?\n\n", a, b, c, d);
		}
	}
}
if (grade < 1 || grade>6)
	printf("error");
if (problemnum <= 0)
	printf("error");
}

	