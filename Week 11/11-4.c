#include<stdio.h>
int main() {
	int a[20];
	char* b[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	char* c[10] = { "abc","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };
	int i, n, N, t, m = 0;
	scanf("%d", &n);

	for (i = 0; n != 0; i++) {
		a[i] = n % 10;
		n = n / 10;
	}
	for (n = i-1; n >= 0; n--) {
		t = a[n];
		if (t != 0) {
			if ((n + 1) % 3 == 0) {
				if (m == 0) {
					printf("%s", b[t]);
				}
				else { printf(" %s", b[t]);
				m++;
				}
				printf(" hundred");
			}
			if ((n + 2) % 3 == 0) {
				if (m == 0) {
					printf("%s", c[t]);
					m++;
				}
				else {
					printf(" %s", c[t]);
				}
			}
			if (n % 3 == 0) {
				if (m == 0) {
					printf("%s", b[t]);
					m++;
				}
				else {
					printf(" %s", b[t]);
				}
			}
			if (n == 9) {
				printf(" billion");
			}
			if (n == 6) {
				printf(" million");
			}
			if (n == 3) {
				printf(" thousand");
			}
		}
	}
	return 0;
}
