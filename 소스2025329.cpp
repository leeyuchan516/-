//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("ù ��° ����� �� ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k);
//	printf("�� ���� ����� �� ==>");
//	scanf("%d", &b);
//
//if (k == '+') {
//	result = a + b;
//	printf("%d + %d = %d \n", a, b, result);
//}
//
//if (k == '-') {
//	result = a - b;
//	printf("%d - %d = %d \n", a, b, result);
//
//}
//if (k == '*') {
//	result = a * b;
//	printf("%d * %d = %d \n", a, b, result);
//
//}
//
//if (k == '/') {
//	if (b != 0) {
//		result = a / b;
//		printf("%d / %d = %d \n", a, b, result);
//	}
//	else
//		printf("0���� ������ �ȵ˴ϴ�. \n");
//}
//
//if (k == '%') {
//	if (b != 0) {
//		result = a % b;
//		printf("%d %% %d = %d \n", a, b, result);
//	}
//	else
//		printf("0���� ������ ���������� �ȵ˴ϴ�. \n");
//}
//}
//#include <stdio.h>
//
//void main()
//{
//	printf("\n�� �ٲ�\n���� \n");
//	printf("\t��Ű\t���� \n");
//	printf("�̰���\r����ϴ�.\n");
//	printf("\a\a\a�߼Ҹ� 3�� \n");
//	printf("���ڰ� \"����\"�Ǵ� ȿ�� \n");
//	printf("\\\\\\ �������� �� �� ��� \n");
//}
//#include <stdio.h>
//
//int main()
//{
//	int x;
//	int fifty;
//	printf("���������� �� �Է� : ");
//	scanf("%d", &x);
//	fifty = 50;
//	printf("%d %% %d = %d\n", x, fifty, x % fifty);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d =6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d =6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d =6/4\n", data3);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1/ number2);
//	printf("%d/%d\n", number1, number2);
//
//	return 0;
//
//	return 0;
//}
//#include <stdio.h>
//int main ()
//{
//	int jelly;
//	int change;
//	printf("1000�� �̸��� ������ ������ �Է����ּ���.(��)");
//	scanf("%d", &jelly);
//	change = 1000 - jelly;
//
//	int change500 = change / 500;
//	change = change % 500;
//	int chage100 = change / 100;
//	change = change % 100;
//	int change50 = change / 50;
//	change = change % 50;
//	int change10 = change / 10;
//	change = change % 10;
//	//int change5 = change / 5;
//	//change = change % 5;
//	//int change1 = change / 1;
//	printf("�Ž������� 500�� %d��, ", change500);
//	printf("100�� %d��, ", chage100);
//	printf("50�� %d��, ", change50);
//	printf("10�� %d��, ", change10);
//	printf("�������� ���������Դϴ�.");
//
//	return 0;
//}
//#include <stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("ù���� : %d\n", randInt);
//	printf("�������� : %d", nextInt);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("ù���� : %d\n", randInt);//0-9
//	printf("�������� : %d", nextInt);//50-
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("�� �ָӴϿ� �ִ� ����");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d���Դϴ�.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("�׸��� ������ ������");
//	printf(" %d���̴�.", coin500+ coin100);
//	printf("\n���� ���ڸ� �� �� ������?");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple�� 10�� �ֽ��ϴ�.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//		if (!apple)
//	{
//			printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//		else
//		{
//			printf("apple�� 0���� �ƴմϴ�.\n");
//		}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input < 0)
//	{
//		printf("input�� �����Դϴ�.\n");
//	}
//	else if (input > 0)
//	{
//		printf("input�� ����Դϴ�.\n");
//	}
//	else
//	{
//		printf("input�� 0�Դϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99)
//	{
//		printf("input�� �� �ڸ� �����Դϴ�.\n");
//	}
//	else
//	{
//		printf("input�� ���ڸ� ���ڰ� �ƴմϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	else if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//	scanf("%d", &y_age);
//
//	printf("�ʴ� ");
//
//	if (y_age >= 15)
//	{
//		printf("15�� ������, ");
//	}
//	if (y_age >= 12)
//	{
//		printf("12�� ������, ");
//	}
//
//	printf("��ü�������� �� �� �ֽ��ϴ�.\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char initial;
//	scanf("%c", &initial);
//	if (initial <= 41 && initial >= 0x5a)
//	{
//		printf("�ҹ���\n");
//	}
//	else
//	{
//		printf("�빮��\n");
//	}
//	return 0;
//}