#include<stdio.h>

int main()
{
	int n;//Ҫ�жϵ�����
	int i = 2;//�����ж�

	printf("������һ�����ж��ǲ���������");

	scanf_s("%d", &n);

	for (; i <= n; i++)
	{
		if (i == n)
		{
			printf("������������\n");
		}
		else if (n % i == 0)
		{
			printf("��������������\n");
			break;
		}		
	}
	return 0;
}