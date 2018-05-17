#include<stdio.h>
int main()
{
	int n, i, count = 0;
	long int a[1000], b[1000], m, z = 0, y,zs=0,fz,fm;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
    {
		scanf("%ld/%ld", &a[i], &b[i]);
	}
	for (m = 1; ; m++)
    {
		for (i = 0; i < n; i++)
        {
			if (m%b[i] == 0)
            {
				count++;
			}
		}
		if (count == n)
        {
			break;
		}
		count = 0;
	}
	for (i = 0; i < n; i++)
    {
		z = z + m / b[i] * a[i];
	}
	y = m + z;
	for (i = 2; i < y; i++)
    {
		while (m%i == 0 && z%i == 0)
        {
			m = m / i;
			z= z / i;
		}
	}
	if (z >= m)
    {
		zs = z / m;
		
	}
	fz = z - zs * m;
	if (zs == 0 & fz != 0)
    {
		printf("%ld/%ld", fz, m);
	}
	if (zs != 0 && fz == 0)
    {
		printf("%ld", zs);
	}
	if (zs != 0 && fz != 0)
    {
		printf("%ld %ld/%ld", zs, fz, m);
	}
	return 0;
}
