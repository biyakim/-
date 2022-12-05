#include <stdio.h>
#define SIZE 11

int main(void) {

    char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', '\0' }; // ****** \0은 문자열의 끝표시
    int index, i; //삽입 위치
    int value; //삽입할 값

    printf("삽입 위치 : ");
    scanf_s("%d", &index);

    getchar();

    //컴퓨터 처리속도와 키보드 입력속도 차이를 해소하기 위해 Buffer 입력받아서 처리

    printf("삽입 data : ");
    scanf_s("%c", &value);

    getchar();

    for (i = SIZE - 1; i > index; i--) {
        a[i] = a[i - 1];
    }

    a[SIZE - 1] = '\0';

    a[index] = value;

    printf("삽입결과:%s\n", a);

    return 0;
}
