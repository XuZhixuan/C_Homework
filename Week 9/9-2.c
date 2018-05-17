#include<stdio.h>  

int arr[100];

int main() {

	int i;
	int m;
	scanf_s("%d", &m);
	arr[1] = 1;
	arr[2] = 1;
	for (i = 3; i<=m ; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	printf("%d ", arr[m]);

	int sum = 0;
	for (int t = 0; t <= m; t++)
	{
		sum = sum + arr[t];
	}
	printf("%d", sum);
	return 0;
}