#include <stdio.h>

void guickSort(int a[], int left, int right) {
	int i = left, j = right, pivot = a[left], temp;

	if (left < right) {
		while (i < j) {
			while (i < right && pivot >= a[i])i++;
			while (j > left && pivot <= a[j])j--;
			if (i < j) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		a[left] = a[j];
		a[j] = pivot;
		guickSort(a, left, j - 1);
		guickSort(a, j + 1, right);
	}

}

int main(void) {
	int a[] = { 15,7,2,20,33,17,26,5,21,30,27,29,11,10,3 };
	int n = sizeof(a) / sizeof(int);

	guickSort(a, 0, n - 1);
	printf("�� ���� : ");
	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);
	printf("\n");

	return 0;
}
