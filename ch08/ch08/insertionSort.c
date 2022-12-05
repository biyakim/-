#include <stdio.h>

void insertionSort(int* a, int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (key < a[j])a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = key;
	}
}

int main(void) {
	int a[] = { 7,12,6,11,3,8,5,2 };
	int i,n = sizeof(a) / sizeof(int);

	insertionSort(a, n);

	printf("\n»ðÀÔ Á¤·Ä : ");
	for (i = 0; i < n; i++)printf("%d  ", a[i]);

	return 0;
}