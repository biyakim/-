#include <stdio.h>
int main(void) {
	int n = 5, facto = 1;//5!=5*4*3*2*1
	for (int i = n; i >= 1; i--)
		facto *= i;//factoi=facto*i;

	printf("%d!=%d\n", n, facto);//5!=120
	return 0;
}

int factorial(int n) {
	if (n == 1)return 1;
	return n * factorial(n - 1);
}
int main(void) {
	int n = 5;
	printf("%d!=%d\n", n, factorial(n));
	return 0;
}
