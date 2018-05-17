#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void to_english(char a);

int main()
{
	char input[101];
	int length, length_c, sum = 0;
	int middle[101];

	gets_s(input,101);
	
	for (length = 1; ; length++)
	{
		if (input[length] == '\0')
		{
			break;
		}
	}

	for (int i = 1; i <= length; i++)
	{
		middle[i - 1] = input[i - 1] - '0';
	}

	for (int i = 1; i <= length; i++)
	{
		sum += middle[i - 1];
	}

	char result[101];
	_itoa_s(sum, result, 101, 10);

	for (length_c = 1; ; length_c++)
	{
		if (result[length_c] == '\0')
		{
			break;
		}
	}

	for (int i = 0; i < length_c; i++)
	{
		to_english(result[i]);
		if (i != length_c-1)
		{
			printf(" ");
		}
	}
	return 0;
}

void to_english(char a)
{
	char flag[10];
	switch (a)
	{
	case '0':
		strcpy_s(flag, 10, "zero");
		break;
	case '1':
		strcpy_s(flag, 10, "one");
		break;
	case '2':
		strcpy_s(flag, 10, "two");
		break;
	case '3':
		strcpy_s(flag, 10, "three");
		break;
	case '4':
		strcpy_s(flag, 10, "four");
		break;
	case '5':
		strcpy_s(flag, 10, "five");
		break;
	case '6':
		strcpy_s(flag, 10, "six");
		break;
	case '7':
		strcpy_s(flag, 10, "seven");
		break;
	case '8':
		strcpy_s(flag, 10, "eight");
		break;
	case '9':
		strcpy_s(flag, 10, "nine");
		break;
	default:
		strcpy_s(flag, 10, "Error Data");
		break;
	}
	printf("%s",flag);
}