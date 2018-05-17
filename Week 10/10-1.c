#include <stdio.h>

int in_array(int a[], int l, int b);
void sort(int array[], int size);

int main()
{
	int length_a, length_b, length_c = 0, length_i = 0;
	int a[10], b[10];
	int common[10], incommon[20];

	register int i, j;

	scanf_s("%d", &length_a);
	for (i = 0; i < length_a; i++)
	{
		scanf_s("%d", &a[i]);
	}

	scanf_s("%d", &length_b);
	for (i = 0; i < length_b; i++)
	{
		scanf_s("%d", &b[i]);
	}

	for (i = 0; i < length_a; i++)
	{
		if (in_array(b, length_b, a[i]) == 1)
		{
			common[length_c] = a[i];
			length_c++;
		}
	}

	for (int k = 0; k < length_a; k++)
	{
		if (in_array(common, length_c, a[k]) == 0)
		{
			incommon[length_i] = a[k];
			length_i++;
		}
	}

	for (int k = 0; k < length_b; k++)
	{
		if (in_array(common, length_c, b[k]) == 0)
		{
			incommon[length_i] = b[k];
			length_i++;
		}
	}

	sort(incommon, length_i);

	for (int i = 1; i <= length_i; i++)
	{
		if (i == length_i)
		{
			printf("%d", incommon[i-1]);
			continue;
		}
		printf("%d ", incommon[i-1]);
	}

	return 0;
}

int in_array(int array[], int l, int b)
{
	int flag = 0;

	for (int j = 0; j < l; j++)
	{
		if (array[j] == b)
		{
			flag = 1;
			break;
		}		
	}

	return flag;
}

void sort(int array[], int size)
{
	int i, j, temp;

	for (i = 0; i < size; ++i)
	{
		for (j = i + 1; j < size; ++j)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}