#include <stdio.h>

int max();
int min();

void main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int max_s = max(a, b, c);
	int min_s = min(a, b, c);
	if (a+b>max_s && a+c>max_s && b+c>max_s)
	{
		if (a-b<min_s && a-c<min_s && b-c<min_s)
		{
			printf("YES");
		}
		else
		{
			printf("ERROR DATA");
		}
	}
	else {
		printf("ERROR DATA");
	}
	
}

int max(a, b, c)
{
	if (a <= b)
	{
		a = b;
	}
	if (a <= c)
	{
		a = c;
	}

	return a;
}

int min(a, b, c)
{
	if (a >= b)
	{
		a = b;
	}
	if (a >= c)
	{
		a = c;
	}

	return a;
}