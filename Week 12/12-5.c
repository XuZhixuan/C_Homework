#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;

	scanf_s("%d%d", &a, &b);

	if (a < b)
	{
		a ^= b;
		b ^= a;
		a ^= b;
	}

	int k = a - b;
	
	a = (int)(k*(1 + sqrt(5)) / 2.0);

	if (a == b)
		printf("0\n");
	else
		printf("1\n");	

	return 0;
}