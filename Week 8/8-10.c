#include<stdio.h>

int main()
{
	int a;
	int b = 0;
	for (int i = 0; ; i++)
	{
		scanf_s("%d", &a);
		if (a<=0)
		{
			break;
		}
		b = b + a;
	}
	printf("%d", b);
	return 0;
}