#include <stdio.h>
#define SIZE 11 //컴파일 할 때 주어짐 
int main(void) {
	char a[] = { 'A','B','C','D','E','F','G','H','I','J','\0' };//\0 =<문자열에 끝 표시
	int index, i;
	printf("삭제 위치 : ");
	scanf_s("%d", &index); //Buffer = 컴퓨터와 키보드 속도차를 줄이기 위해서
	getchar();
	for (i = index; i < SIZE - 1; i++) {
		a[i] = a[i + 1];
	}
	
	printf(" 삭제결과 : %s", a);
	return 0;
}