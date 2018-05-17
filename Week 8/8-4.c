#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;

	printf("%d %d %d %d", c, d, e, f);
	return 0;
}