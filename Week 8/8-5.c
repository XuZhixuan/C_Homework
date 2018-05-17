#include<stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	int h = a / 3600;
	int c = a % 3600;
	int m = c / 60;
	int s = c % 60;

	printf("%d:%d:%d", h, m, s);
	return 0;
}