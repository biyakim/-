#include <stdio.h>
#define SIZE 11 //������ �� �� �־��� 
int main(void) {
	char a[] = { 'A','B','C','D','E','F','G','H','I','J','\0' };//\0 =<���ڿ��� �� ǥ��
	int index, i;
	printf("���� ��ġ : ");
	scanf_s("%d", &index); //Buffer = ��ǻ�Ϳ� Ű���� �ӵ����� ���̱� ���ؼ�
	getchar();
	for (i = index; i < SIZE - 1; i++) {
		a[i] = a[i + 1];
	}
	
	printf(" ������� : %s", a);
	return 0;
}