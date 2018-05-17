#include <stdio.h>

void print_array(int array[]);

int main()
{
	int a_1[4];
	int a_2[4];
	int a_3[4];
	int b_1[4];
	int b_2[4];
	int b_3[4];
	int c_1[4];
	int c_2[4];
	int c_3[4];

	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &a_1[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &a_2[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &a_3[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &b_1[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &b_2[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &b_3[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		c_1[i] = a_1[i] + b_1[i];
	}
	for (int i = 0; i < 4; i++)
	{
		c_2[i] = a_2[i] + b_2[i];
	}
	for (int i = 0; i < 4; i++)
	{
		c_3[i] = a_3[i] + b_3[i];
	}
	print_array(c_1);
	printf("\n");
	print_array(c_2);
	printf("\n");
	print_array(c_3);

	return 0;
}

void print_array(int array[])
{
	for (int i = 0; i < 4; i++)
	{
		printf(i == 3 ? "%d " : "%d", array[i]);
	}
}