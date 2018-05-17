#include<stdio.h>
int main()
{
	int k, i, n, c, s, d,tou=0,wei=0,f=0;
	int a[100000];
	scanf("%d", &k);
	for (i = 0; i<k; i++) {
		scanf("%d", &a[i]);
	}
	for(i=0;i<k;i++){
		if(a[i]<0){
			f++;
		}
		if(f==k){
			printf("0 0 %d",(k-1));
		}
	}
	if(f!=k){
	c = 0;
	s = a[0];
	for (n = 0; n<k; n++) {
		for (i = n; i<k; i++) {
			c = c + a[i];
			if (c>s) {
				s = c;
				tou = n;
				wei = i;
			}
		}
		c = 0;
	}
	printf("%d %d %d", s,tou,wei);}
	return 0;
}
