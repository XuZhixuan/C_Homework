#include<stdio.h>  

int diff(year);

void main()
{
	int year, time, count = 0;
	scanf_s("%d%d", &year, &time);
	if (diff(year) == 1)
	{
		time = time - 1;
	}
	for (int i = 1;count < time; i++)
	{
		year = year + 1;
		if (diff(year) == 1)
		{
			count = count + 1;
		}
	}
	printf("%d", year);

}

int diff(year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}