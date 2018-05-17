#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char input[100];
char print[100];

void strprint(char string[], int size, int black);

int main()
{
	gets_s(input, 100);
	int len = strlen(input);

	int i = 1, j = 1;

	for (i = 1; i <= len; i++)
	{
		for (j = 1; j <= i; j++)
		{
			print[j - 1] = input[len - j];
		}
		_strrev(print);
		strprint(print, i, i == len ? 0 : 1);
	}

	return 0;
}

void strprint(char string[], int size, int black)
{
	for (int i = 0; i < size; i++)
	{
		printf("%c", string[i]);
	}
	if (black)
	{
		printf(" ");
		return;
	}
}