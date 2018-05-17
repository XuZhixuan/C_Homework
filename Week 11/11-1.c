#include<stdio.h>
int prime(int n);
int main(){
	int a[100] = { 0 }, b[100] = { 0 };
	int c[100] = { 0 };
	int i,n;
	for (i = 0;; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] < 0){
			break;
		}
		scanf("%d", &b[i]);
	}
	
	for (n = 0; n < i; n++){
		c[n] = tenr(a[n], b[n]);
		/*printf("%d ", c[n]);*/
	}
	for (n = 0; n < i; n++){
		if (prime(a[n]) == 1 && prime(c[n]) == 1){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
int prime(int n){
	int i;
	int m = 1;
	if (n <= 1){
		m = 0;
	}
	if (n >= 2){
		for (i = 2; i<n; i++){
			if (n%i == 0)
			{
				m = 0;
				break;
			}
		}
	}
	return m;
}
int tenr(int a, int b){
	int c[100];
	int i, s=0;
	for (i = 0; a!= 0; i++){
		c[i] = a%b;
		a = a / b;
	}
	int n;
	for (n = 0; n < i; n++){
		s = s*b + c[n];
	}
	return s;
}
