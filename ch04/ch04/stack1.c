#include <stdio.h>
#define SIZE 6

int stack[SIZE];
int top = -1;

void push(int data) {
	if (top==SIZE-1) {
		printf("stack overflow! \n");
		return -1;
	}
	else {
		stack[++top] = data;
		return 0;
	}
}
int pop(void) {
	if (top == -1) {
		printf("stack underflow!\n");
		return -1;
	}
	return stack[top--];
}
int main(void) {
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);

	printf("%d\n", pop());

	return 0;
}