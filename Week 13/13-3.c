#include <stdio.h>

int search[15];

int binary_search(int arr[], int size, int num);

int main()
{
	int num;
	scanf_s("%d", &num);

	for (int i = 0; i < 15; i++)
	{
		search[i] = i + 1;
	}

	int result = binary_search(search, 15, num);
	printf("%d", result);
	return 0;
}

int binary_search(int arr[], int size, int num)
{
	int low = 0, high = size - 1, mid;

	while (low <= high) {
		mid = (low + high) / 2;
		if (num > arr[mid]) {
			low = mid + 1;
		}
		else if (num < arr[mid]) {
			high = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}