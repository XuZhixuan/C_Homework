#include<stdio.h>

int main()
{
	float a, b, c;
	scanf_s("%f%f%f", &a, &b, &c);
	double d = (a + b + c);
	int e = (int)d+1;
	printf("%g %d", d, e);
	return 0;
}