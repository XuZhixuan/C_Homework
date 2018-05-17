#include<stdio.h>
int p(int a, int b, int c, int t);
int main()
{
	int n[100], i, ks, l, k, pj = 0, cl = 0, da,nn,aa;
	int a[10000], b[10000], c[10000];
	for (nn = 0;; nn++) {
		scanf("%d", &n[nn]);
		if (n[nn] == 0) {
			break;
		}
		for (i = n[nn]*100; i < n[nn]*100+n[nn]; i++) {


			scanf("%d", &a[i]);
			scanf("%d", &b[i]);
			scanf("%d", &c[i]);
		}
	}
	aa = nn;
	for (nn = 0; nn < aa; nn++) {
		for (ks = 0; ks < 10000; ks++) {
			for (i = n[nn] * 100; i < n[nn] * 100 + n[nn]; i++) {
				if (p(a[i], b[i], c[i], ks) == 1) {
					pj++;
				}
			}
			if (pj == n[nn]) {
				cl++;
				da = ks;
			}
			pj = 0;
		}
		if (cl == 1) {
			printf("%d\n", da);
		}
		else {
			printf("Not sure\n");
		}
	}
		return 0;
	
}
int p(int a, int b, int c, int t) {
	int i;
	int aw[100] = { 0 }, tw[100] = { 0 }, w=0, a1, t1;
	int k, l,jg = 0;
	a1 = a;
	t1 = t;
	for (i = 0; i < 4; i++) {
		aw[i] = a % 10;
			tw[i] = t % 10;
		if (aw[i] == tw[i]) {
			w++;
		}
		a = a / 10;
		t = t / 10;
	}
	for (k = 0; k<4; k++) {
		for (l = 0; l<4; l++) {
			if (tw[k] == aw[l]) {
				jg++;
				tw[k] = -1;
				aw[l] = -2;
				break;
			}
		}
	}
	if (w == c && jg == b) {
		return 1;
	}
	else {
		return 0;
	}
}
