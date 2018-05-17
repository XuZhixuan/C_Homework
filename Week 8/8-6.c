#include<stdio.h>

int gcd();
int dfd();
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int e = gcd(a, b);
	int f = gcd(e, c);
	int m = dfd(a, b, c);
		
	printf("%d %d", f, m);
	return 0;
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a%b);
}

int dfd(int a, int b, int c)
{
	for (int i = a;; i++)
	{
		if (i % a == 0 && i % b == 0 && i % c == 0)
		{
			return i;
			break;
		}
	}
}