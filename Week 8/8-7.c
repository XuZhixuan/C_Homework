#include<stdio.h>
int main()
{
	int a, n, i, b, c = 0;
	scanf_s("%d %d", &a, &n);
	b = a;
	for (i = 0; i <= n - 1; i++)
	{
		c = c + b;
		b = b * 10 + a;
	}
	printf("%d", c);
	return 0;
}