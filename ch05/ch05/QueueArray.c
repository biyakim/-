#include <stdio.h>
#define SIZE 6

int queue[SIZE];
int rear = -1, front = 0;

int add(int data) {
	if (rear == SIZE - 1) {
		printf("Queue Overflow!\n");
		return -1;
	}
	queue[++rear] = data;
	return 0;
}

int delete(void) {
	if (rear < front) {
		printf("Queue Underflow!\n");
		return -1;
	}
	return queue[front++];
}

int main(void) {
	add(10);
	add(20);
	add(30);

	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());

	add(40); add(50); add(60); add(70);

	return 0;
}