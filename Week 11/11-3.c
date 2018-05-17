#include<stdio.h>
int main()
{
	char a[1000];
	int c[1000];
	int i, m = 0, s = 0, t=0;
	int n, j = 0, g = 0, h = 0;
	scanf("%s", &a);
	for (i = 0; a[i] != '\0'; i++);
	for (n = 0; n < i; n++) {
		a[n] = a[n] - 48;
	}
	for (m = 0; m < i;) {

		for (; a[m] == 5 && m<i; m++);
		if (a[m] != 5&&m<i) {
			for (; a[m] != 5 && m < i;) {
				s = s * 10 + a[m];
				m++;
			}
			c[t] = s;
			s = 0;
			t++;
		}
	}

	for (g = 0; g < t; g++) {
		for (j = 0; j < (t - g - 1); j++) {
			if (c[j] > c[j + 1]) {
				h = c[j];
				c[j] = c[j + 1];
				c[j + 1] = h;
			}
		}
	}
	for (g = 0; g<t; g++) {
		if (g == 0) {

			printf("%d", c[g]);
		}
		else {
			printf(" %d", c[g]);
		}
	}
	return 0;
}