#include<stdio.h>

int main()
{
	float a, b, c, d;
	int x;
	scanf("%d", &x);
	a = 2.0;
	b = 1.0;
	c = 0.0;
	for (int i = 0; i < x; i++)
	{
		c = c + (a / b);
		d = a;
		a = a + b;
		b = d;
	}
	printf("%.4f", c);
	return 0;
}