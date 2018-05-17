#include<stdio.h>
struct ren {
	char a[20];
	char b[20];
	char c[20];
};
int main()
{
	int n;
	int i,t,count;
	scanf("%d", &n);
	struct ren r[100];
	for (i = 0; i < n; i++) {
		scanf("%s", &r[i].a);
		scanf("%s", &r[i].b);
		scanf("%s", &r[i].c);
	}
	for (i = 0; i < n; i++) {
		for (t = 0; t < n; t++) {
			if (strcmp(r[i].b, r[t].b) < 0) {
				count++;
			}
		}
		if (count == (n - 1)) {
			printf("%s", r[i].a);
			break;
		}
		count = 0;
	}
	for (i = 0; i < n; i++) {
		for (t = 0; t < n; t++) {
			if (strcmp(r[i].c, r[t].c) > 0) {
				count++;
			}
		}
		if (count == (n - 1)) {
			printf(" %s", r[i].a);
			break;
		}
		count = 0;
	}
	return 0;

}
