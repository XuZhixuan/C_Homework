#include <stdio.h>
#include <math.h>

int main()
{
	double drop, volume;
	int drops, interval, time = 0;

	scanf_s("%lf%lf", &drop, &volume);

	drops = ceil(volume / drop);

	time += drops;
	
	for (interval = 0; ; interval++)
	{
		drops -= interval;
		if (drops <= interval)
		{
			break;
		}
	}

	time += interval;

	printf("%d",time);

	return 0;
}