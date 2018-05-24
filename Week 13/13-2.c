#include <stdio.h>
#include <math.h>

struct Solider
{
	int origin;
	int change;
};

struct Solider troop[6000];

int origin;
int amount;
int left[3];

void initialize(int amount);
void countOff(int remove);
void fallOut(int remove);
void printArray(int array[], int size);

int main()
{	
	scanf_s("%d", &amount);

	origin = amount;

	initialize(amount);

	int remove = 2;

	do
	{
		countOff(remove);
		fallOut(remove);
		remove++;

		if (remove > 3)
		{
			remove = 2;
		}

	} while (amount > 3);

	int size = 0;

	for (int i = 0; i < origin; i++)
	{
		if (troop[i].origin != 0)
		{
			left[size] = troop[i].origin;
			size++;
		}
	}

	printArray(left, size);	

	return 0;
}

void initialize(int amount)
{
	for (int i = 1; i <= amount; i++)
	{
		troop[i - 1].origin = i;
	}
}

void countOff(int remove)
{
	int count = 1;

	for (int i = 0; i < origin; i++)
	{
		if (troop[i].origin != 0)
		{
			troop[i].change = count;
			count++;
		}

		if (count > remove)
		{
			count = 1;
		}
	}
}

void fallOut(int remove)
{
	for (int i = 0; i < origin; i++)
	{
		if (troop[i].change == remove)
		{
			troop[i].origin = 0;
			troop[i].change = 0;
			amount--;
		}
	}
}

void printArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf(i == size - 1 ? "%d" : "%d ", array[i]);
	}
}