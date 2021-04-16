#include<stdio.h>

int main()
{
	//
	int n = 2;
	int sum = 1;
	int i = 2;
	for (; n <= 1000; n++)
	{
		sum = 1;
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
			}
		}
		if (sum == n)
		{
			printf("%d itd factors are 1,", n);
			for (i = 2; i < n; i++)
			{
				if (n % i == 0)
				{
					printf("%d,", i);
				}
			}
			printf("\n");
		}
	}

	return 0;
}