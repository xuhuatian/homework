#include<stdio.h>

int main()
{
	int n;//要判断的数。
	int i = 2;//用于判断

	printf("请输入一个数判断是不是素数：");

	scanf_s("%d", &n);

	for (; i <= n; i++)
	{
		if (i == n)
		{
			printf("该数是素数！\n");
		}
		else if (n % i == 0)
		{
			printf("该数不是素数！\n");
			break;
		}		
	}
	return 0;
}