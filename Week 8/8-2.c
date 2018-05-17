#include<stdio.h>

int main()
{
	char a, b, c, d;
	scanf("%c%c%c%c", &a, &b, &c, &d);
	if (a >= 'A'&&a <= 'Z')
	{
		a += 3;
		if (a>='Z')a -= 26;
	}
	else
	if (a >= 'a'&&a <= 'z')
	{
		a += 3;
		if (a>'z')a -= 26;
	}
	if (b >= 'A'&&b <= 'Z')
	{
		b += 3;
		if (b >= 'Z')b -= 26;
	}
	else
	if (b >= 'a'&&b <= 'z')
	{
		b += 3;
		if (b>'z')b -= 26;
	}

	if (c >= 'A'&&c <= 'Z')
	{
		c += 3;
		if (c >= 'Z')c -= 26;
	}
	else
	if (c >= 'a'&&c <= 'z')
	{
		c += 3;
		if (c>'z')c -= 26;
	}

	if (d >= 'A'&&d <= 'Z')
	{
		d += 3;
		if (d >= 'Z')d -= 26;
	}
	else
	if (d >= 'a'&&d <= 'z')
	{
		d += 3;
		if (d>'z')d -= 26;
	}

	printf("%c%c%c%c", a, b, c, d);
	return 0;

}