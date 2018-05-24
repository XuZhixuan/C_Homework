#include <stdio.h>

int input[101];

void rank(int* array, int size);
void print_array(int* array, int size);

int main()
{
	int size, insert;
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &input[i]);
	}

	scanf_s("%d", &input[size]);

	rank(input, size+1);

	print_array(input, size + 1);

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
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}		
}