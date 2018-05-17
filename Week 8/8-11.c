#include<stdio.h>

int main()

{
	unsigned int a, b, c, N;
	unsigned int n = 0;

	scanf_s("%d", &N);
	for (a = 1; a <= N; a++)
    {
        for (b = a + 1; b <= N; b++)
		{
            for (c = b + 1; c <= N; c++)
			{
				if (a*a + b * b == c * c)
				{
					n++;
				}
			}
        }	
    }		

	printf("%d", n);
	return 0;

}