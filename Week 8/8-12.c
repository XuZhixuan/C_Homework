#include <stdio.h>

void main()
{
	int n, i;
	scanf_s("%d", &n);
	printf("1*");
	for (i = 2; i <= n; i++)
	{
		while (n != i)
		{
			if (n%i == 0)
			{
				printf("%d*", i);
				n = n / i;
			}
			else
				break;
		}
	}
	printf("%d", n);
}