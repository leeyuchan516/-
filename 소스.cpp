//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	double c1 = a / b;
//	double c2 = (double)a / b;
//	printf("%1f %1f", c1, c2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input1;
//	int input2;
//	char oper;
//
//	printf("ù ��° ����� �� ==> ");
//	scanf("%d", &input1);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &oper);
//	printf("�� ���� ����� �� ==> ");
//	scanf("%d", &input2);
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d\n", input1, input2, input1 + input2);
//		break;
//	case '-': printf("%d + %d = %d\n", input1, input2, input1 - input2);
//		break;
//	case '*': printf("%d * %d = %d\n", input1, input2, input1 * input2);
//		break;
//	case'/': printf("%d / %d = %d\n", input1, input2, input1 / input2);
//		break;
//	case'%': printf("%d %% %d = %d\n", input1, input2, input1 % input2);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int month;
//	printf("���� �� ���ΰ���? ==> ");
//	scanf("%d" , &month);
//	switch (month)
//	{
//	case 1: printf("January�Դϴ�.");
//		break;
//	case 2: printf("February�Դϴ�.");
//		break;
//	case 3: printf("March�Դϴ�.");
//		break;
//	case 4: printf("April�Դϴ�.");
//		break;
//	case 5: printf("May�Դϴ�.");
//		break;
//	case 6: printf("June�Դϴ�.");
//		break;
//	case 7: printf("July�Դϴ�.");
//		break;
//	case 8: printf("August�Դϴ�.");
//		break;
//	case 9: printf("September�Դϴ�.");
//		break;
//	case 10: printf("October�Դϴ�.");
//		break;
//	case 11: printf("November�Դϴ�.");
//		break;
//	case 12: printf("December�Դϴ�.");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command ;
//
//	printf("<, a ���� �̵� \n");
//	printf(">, d �������̵� \n");
//	scanf("%c" , &command);
//	switch (command)
//	{
//	case '<' :
//	case 'a' :
//		printf("�������� �̵��մϴ�.\n");
//		break;
//	case '>' : case 'd' :
//		printf("���������� �̵��մϴ�.\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	const int option = 3;
//	printf("�޴��� �����ϼ���");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//	scanf("%d" , &number);
//
//	switch (number)
//	{
//	case 1 :
//		printf("�� ���� ����.\n");
//		break;
//	case 2 :
//		printf("���̺� ������ �ε�.\n");
//		break;
//	case option :
//		printf("�ɼ� ����.\n");
//		break;
//	default :
//		printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("0~9 ���̿� ���� �Է� ==> ");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3:
//	case 6:
//	case 9:
//		printf("'¦'");
//		break;
//	default :
//		printf("%d", number);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x':
//		printf("�˹ٺ� x �Է�.\n");
//		break;
//	case 'X':
//		printf("����ǥ �Է�.\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d" , &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d" , &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//		int number3, number4;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d" , &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	char a;
//	printf("w a d s �� �ϳ� �Է� ==> ");
//	scanf(" %c", &a);
//	switch (a)
//	{
//	case 'w': printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.'");
//		break;
//	case 'a': printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.'");
//		break;
//	case 'd': printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.");
//		break;
//	case 's': printf("'�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.'");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int appetizer, maindish, dessert;
//	printf("appetizer 1.ĳ��� 2.������ 3. Ǫ�Ʊ׶�\n");
//	printf("maindish 1. ������ũ 2. �����丮 3. �簥��\n");
//	printf("dessert 1. ����ũ 2. ���̽�ũ�� 3. ���ݸ�����\n");
//	scanf("%d %d %d", &appetizer, &maindish, &dessert);
//	printf("�ֹ��� ������ ");
//	switch(appetizer)
//	{
//	case 1: printf("ĳ���, ");
//		break;
//	case 2: printf("������, ");
//		break;
//	case 3: printf("Ǫ�Ʊ׶�, ");
//		break;
//	}
//	switch(maindish)
//	{
//	case 1: printf("������ũ, ");
//		break;
//	case 2: printf("�����丮, ");
//		break;
//	case 3: printf("�簥��, ");
//		break;
//	}
//	switch (dessert)
//	{
//	case 1: printf("����ũ");
//		break;
//	case 2: printf("���̽�ũ��");
//		break;
//	case 3: printf("���ݸ�����");
//		break;
//	}
//	printf("�Դϴ�.");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x) ", i, i);
//
//		if (i >= 70 && i < 80) { i++; continue; }
//
//		if (1 % 10 == 9) printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	while (0)
//	{
//		printf("������ ���� ��� �ݺ����\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("������ ���� ��� �ݺ����\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//
//	while (count < 3)
//
//	{
//		printf("���� count : %d\n", count);
//		printf("count�� 3���� ���� ���� �ݺ�\n");
//		count++;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//
//	while (count > 0)
//	{
//		printf("���� count : %d\n", count);
//		printf("count�� 0���� ū ���� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("���� count : %d\n", count);
//		printf("count�� 0�� �ƴϸ� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	char alphabet;
//	while (1) {
//		printf("���ĺ��� �Է����ּ���(�ٸ� �� �Է½� �ٽ��Է�):");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{printf("�ҹ��ڸ� �Է��ϼ̽��ϴ�");}
//		else if(alphabet >= 'A' && alphabet <= 'Z')
//		{printf("�빮�ڸ� �Է��ϼ̽��ϴ�.\n");}
//		else { continue; }
//		printf("�Է��� �� : %c\n", alphabet);
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int number, total = 0;
//	while (1) {
//		printf("����� �Է����ּ���(0�Է½� ����);");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}
#include <stdio.h>

int main()
{
	int number = 0;
	while (1) {
		number++;
	}
}