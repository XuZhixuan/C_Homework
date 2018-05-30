#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

char track[73];
int h = 0, t = 0;

void action_excutor(int h_action, int t_action);
int action_seeder();
void print_track();
int referee();

int main()
{
	memset(track, 32, 73);
	track[69] = '|';
	
	printf("ON YOUR MARK，GET SET\n");
	printf("BANG！！！！\n");
	printf("AND THEY ARE OFF！！！\n");

	int h_a, t_a;
	do
	{
		print_track();
		
		if (referee() == -1)
		{
			printf("TORTOISE WIN！YAY！！");
			break;
		}
		else if (referee() == 1)
		{
			printf("HARE WINS！YUCH！");
			break;
		}
		else if (referee() == 2)
		{
			printf("It is a tie");
			h = 0;
			t = 0;
			printf("ON YOUR MARK，GET SET\n");
			printf("BANG！！！！\n");
			printf("AND THEY ARE OFF！！！\n");
		}

		h_a = action_seeder();
		t_a = action_seeder();

		action_excutor(h_a, t_a);

		Sleep(1000);
	} while (1);
	return 0;
}

void print_track()
{
	if (h == t)
	{
		track[h+0] = 'O';
		track[h+1] = 'U';
		track[h+2] = 'C';
		track[h+3] = 'H';
	}
	else {
		track[h] = 'H';
		track[t] = 'T';
	}	

	for (int i = 0; i < 72; i++)
	{
		printf("%c", track[i]);
	}
	printf("\n");

	memset(track, 32, 70);
	track[69] = '|';
}

int action_seeder()
{
	int seed = time(NULL);
	srand(seed);
	return rand() % 10 + 1;
}

void action_excutor(int h_action, int t_action)
{
	/* 兔子动作执行者 */
	if (h_action <= 2)
	{
		// Do Nothing
	}
	else if (h_action > 2 && h_action <= 4)
	{
		h = h + 7;
	}
	else if (h_action > 4 && h_action <= 5)
	{
		h = h - 9;
	}
	else if (h_action > 5 && h_action <= 8)
	{
		h = h + 1;
	}
	else if (h_action > 8 && h_action <= 10)
	{
		h = h - 2;
	}

	/* 乌龟动作执行者 */
	if (h_action <= 5)
	{
		t = t + 3;
	}
	else if (h_action > 5 && h_action <= 7)
	{
		t = t - 5;
	}
	else if (h_action > 7 && h_action <= 10)
	{
		t = t + 1;
	}

	if (h < 0)
	{
		h = 0;
	}

	if (t < 0)
	{
		t = 0;
	}

	return;
}

int referee()
{
	int flag = 0;

	if (t >= 69)
	{
		flag = -1;
	}
	else if (h >= 69)
	{
		flag = 1;
	}
	else if (h >= 69 && t >= 69)
	{
		flag = 2;
	}

	return flag;
}
