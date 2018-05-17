#include <stdio.h>

void shift_once(int array[], int size);
void print_array(int a[], int size);

int main()
{
	int leng, digt;
	scanf_s("%d", &leng);
	scanf_s("%d", &digt);

	int array[100];

	for (int i = 0; i < leng; i++)
	{
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < digt; i++)
	{
		shift_once(array, leng);
	}

	print_array(array, leng);

	return 0;
}

void print_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf(i == size - 1 ? "%d" : "%d ", a[i]);
	}
}

void shift_once(int array[], int size)
{
	int i, tmp;
	tmp = array[size - 1];

	for (i = size-2; i >= 0; i--)
	{
		array[i + 1] = array[i];
	}
	array[0] = tmp;
}