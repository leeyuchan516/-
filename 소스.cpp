#include <stdio.h>

int main()
{
	int a;//���� ���� �ִ� ��//
	int b;//�� ��//

	printf("## ����� ��ȯ�� ���� ? ");
	scanf("%d", &a);
	printf("\n\n");

	b = a / 50000;
	printf("���� ��¥�� ==> %d �� \n", b);
	a = a % 50000;

	b = a / 10000;
	printf("�� ��¥�� ==> %d �� \n", b);
	a = a % 10000;

	b = a / 5000;
	printf("��õ ��¥�� ==> %d �� \n", b);
	a = a % 5000;
	
	b = a / 1000;
	printf("õ ��¥�� ==> %d �� \n", b);
	a = a % 1000;

	printf("����� �ٲ��� ���� �ܵ� ==> %d ��", a);
}