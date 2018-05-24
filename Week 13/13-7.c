#include <stdio.h>
#include <malloc.h>
#include <string.h>

char input[1000];

struct Word
{
	char* token;
	int length;
};

struct Word count[100];

void split();

int main()
{
	gets_s(input, 1000);
	
	split();

	return 0;
}

void split()
{
	int i = 0;

	char *token;
	const char *delim = " ";
	char *next_token;

	do
	{
		token = strtok_s(input, delim, &next_token);
		count[i].token = malloc(strlen(token));
		count[i].token = token;
		i++;
	} while (token != NULL);
}