#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);

	double a = 2, b = 1, c;
	double sum = 0.0;

	for (int i = 0; i < n; i++)
	{
		sum += a / b;
		c = a;
		a = a + b;
		b = c;
	}

	printf("%.4f", sum);
	return 0;
}