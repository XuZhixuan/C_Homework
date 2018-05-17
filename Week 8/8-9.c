#include <stdio.h>

void main()
{
	int n, m, o;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d",&m);
		if (i == 0)
		{
			scanf_s("%d", &o);
			if (o >= m)
			{
				o = m;
			}
			i = 2;
			continue;
		}
		else
		{
			if (o >= m)
			{
				o = m;
			}
		}
	}
	printf("%d", o);
}