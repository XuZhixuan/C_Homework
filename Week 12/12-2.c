#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char input[100];
char print[30];

void print_array(char array[], int size);

int main()
{
	memset(print, 32, 30);
	gets_s(input, 100);

	int len = strlen(input);
	double n_x = (len - 2) / 3;

	int n = round(n_x);

	if (len % 2 == 0 && (len - 2) % 3 != 0)
	{
		n++;
	}

	int h = (len - 2 - n) / 2;

	for (int i = 0; i < h; i++)
	{
		print[0] = input[i];
		print[n + 1] = input[len - i - 1];
		print_array(print, n + 2);
	}

	for (int i = 0; i < n + 2; i++)
	{
		print[i] = input[h + i];
	}
	print_array(print, n + 2);

	return 0;
}

void print_array(char array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%c", array[i]);
	}
	printf("\n");
}