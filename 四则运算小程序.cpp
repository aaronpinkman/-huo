#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//ĳ��Сѧ��ʦ����Ϊ����дһ���ܹ��Զ���������������ϰ���С����Ҫ�������꼶����Ŀ��������������꼶����涨��������Ŀ������Ҫ�����£�
//һ�꼶������Ϊ20���ڣ�ֻ���ɼӷ����������ʽ�����С��20
//���꼶������Ϊ50���ڣ����ɼӷ��ͼ����������ʽ�����С��50
//���꼶������Ϊ1000���ڣ����ɼӷ��������ͳ˷��������ʽ
//�ĵ����꼶������Ϊ�Ǹ��������������ٴ���������������ӼӼ��˳��ĸ���������ѡ�����������ŵĻ������ʽ���������Ϊ����
void main()
{
	int grade, problemnum, i;
	printf("�������꼶\n");
	scanf("%d", &grade);
	printf("��������Ŀ����\n");
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
		else//����problemnum����ż�����������ӷ��ͼ���������
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

	