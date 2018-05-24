#include <stdio.h>

int input[101];
int print[101];

void rank(int* array, int size);
void print_array(int* array, int size);

int main()
{
	int size;
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &input[i]);
	}

	rank(input, size);

	print[0] = input[size - 1];
	print[size - 1] = input[size / 2];
	print[size / 2] = input[0];

	print_array(print, size);

	return 0;
}

void print_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf(i == size - 1 ? "%d" : "%d ", array[i]);
	}
}

void rank(int* array, int size)
{
	int temp;

	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (array[j - 1] < array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}		
}