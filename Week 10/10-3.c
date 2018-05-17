#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int x, y, a, b;

	scanf_s("%d", &x);
	scanf_s("%d", &y);

	a = (x + y) / 2;
	b = x - a;

	char a_s[7];
	char b_s[7];

	_itoa_s(a, a_s, 7, 10);
	_itoa_s(b, b_s, 7, 10);

	_strrev(a_s);
	_strrev(b_s);

	long a_l = _atoi64(a_s);
	long b_l = _atoi64(b_s);

	if (a < 0)
	{
		a_l = 0 - a_l;
	}

	if (b < 0)
	{
		b_l = 0 - b_l;
	}

	int s = a_l + b_l;
	int t = a_l - b_l;

	printf("%d %d", s, t);

	return 0;
}