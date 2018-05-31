#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

char input[1000];

struct Character
{
	char letter;
	int count;
};

struct Character count[26];

void rank();
void search();
void initialize();
void print_struct();

int main()
{
	gets_s(input, 1000);

	initialize();
	search();
	rank();

	print_struct();

	return 0;
}

void initialize()
{
	for (int i = 0; i < 26; i++)
	{
		count[i].letter = i + 65;
	}
}

void search()
{
	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] >= 97 && input[i] <= 122)
		{
			count[input[i] - 97].count++;
		} 
		else if (input[i] >= 65 && input[i] <= 90)
		{
			count[input[i] - 65].count++;
		}
	}
}

void rank()
{
	struct Character temp;

	for (int i = 0; i < 26; i++)
	{
		for (int j = 25; j > i; j--)
		{
			if (count[j - 1].count < count[j].count)
			{
				temp = count[j - 1];
				count[j - 1] = count[j];
				count[j] = temp;
			}
		}
	}
}

void print_struct()
{

	for (int i = 0; i < 26; i++)
	{
		printf(i == 25 ? "%c-%d" : "%c-%d ", count[i].letter, count[i].count);
	}
}