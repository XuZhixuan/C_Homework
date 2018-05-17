#include <stdio.h>
#include <stdlib.h>

int num[200];

int check(int size);
int tranform(int origin, int radix);
void print_array(int size);

int main()
{
	int origin, radix;
	scanf_s("%d%d", &origin, &radix);
	int size = tranform(origin, radix);
	int result = check(size);

	if (result)
	{
		printf("Yes\n");
	}
	else 
	{
		printf("No\n");
	}

	print_array(size);

	return 0;
}

int check(int size)
{
	int length = size / 2;
	int flag = 1;
	for (int i = 0; i < length; i++)
	{
		if (num[i] != num[size -i -1])
		{
			flag = 0;
		}
	}

	return flag;
}

int tranform(int origin, int radix)
{
	int i = 0;

	do
	{
		num[i] = origin % radix;
		i++;
		origin = origin / radix;
	} while (origin > 0);

	return i;
}

void print_array(int size)
{
	for (int i = size -1 ; i >= 0; i--)
	{
		printf(i == 0 ? "%d" : "%d ", num[i]);
	}
}