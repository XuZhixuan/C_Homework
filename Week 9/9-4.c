#include <stdio.h>

int i, n, x, ans, sum;

int main(){
	int current = 0, next, t=0;

	for (int i = 0; i < 100; i++)
	{
		scanf_s("%d", &next);
		if (next == 0)
		{
			break;
		}
		if (next > current)
		{
			t = t + (next - current) * 6;
		}
		if (next < current)
		{
			t = t + (current - next) * 4;
		}
		current = next;
		t = t + 5;
	}
	printf("%d", t);
}