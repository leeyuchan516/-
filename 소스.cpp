//#include <stdio.h>
//int main()
//{
//	float a = 123.45;
//	printf("%08.3f", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char intial;
//	scanf("%c", &intial);
//	//printf("%c", intial);
//	printf("�Է��� ���ڴ�");
//	if (intial >= 0x61 && intial <= 0x7a)
//	{
//		printf(" �ҹ����Դϴ�.");
//	}
//	else if (intial >= 65 && intial <='Z')
//	{
//		printf(" �빮���Դϴ�.");
//	}
//	else
//	{
//		printf(" �ҹ��ڵ� �빮�ڵ� �ƴϴ�.");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}
#include <stdio.h>

//int main()
//{
//	int number, answer;
// scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else if (number < answer)
//	{
//		printf("����2�� ����1���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		printf("����1�� 2�� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80) {
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70) {
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60) {
//		printf("������ D����Դϴ�.\n");
//	}
//	else {
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0) {
//		printf("number�� �����Դϴ�.\n");
//	}
//	else {
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� Ȧ���Դϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char a;
//	scanf(" %c", &a);
//	if (a == 'w') {
//		printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.'");
//	}
//	else if (a == 'a') {
//		printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.'");
//	}
//	else if (a == 'd') {
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.'");
//	}
//	else if (a == 's') {
//		printf("'�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.'");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55) {
//		printf("Perfect");
//	}
//	else if (gauge >= 35 && gauge >= 65) {
//		printf("Excellent");
//	}
//	else {
//		printf("good");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input % 3 == 0) {
//		printf("input�� 3�� ����Դϴ�. ");
//		if (input % 6 == 0) {
//			printf("input�� 6�� ����Դϴ�. ");
//		}
//		if (input % 9 == 0) {
//			printf("input�� 9�� ����Դϴ�. ");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case 'i':
//		printf("������â ����\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//	switch(command)
//	{
//	case 'i':
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//
//	switch (command)
//	{
//	case 'i': printf("������â ����\n");
//	case 'm': printf("����â ����\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("������â ����\n");
//		break;
//	case 'm': printf("����â ����\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ���:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("������â ����\n");
//		break;
//	case 'm': printf("���� â ����\n");
//		break;
//	default: printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3:printf("three\n"); break;
//	}
//	return 0;
//}
#include <stdio.h>

int main()
{
	int input1, input2;
	char oper;
	printf("ù ���� ����� �� ==>");
	scanf("%d", &input1);
	printf("�� ��° ����� �� ==>");
	scanf("%d", &input2);
	printf("+ - * % ==>");
	scanf("%c", &oper);
	switch (oper)
	{
	case +: printf("%d", input1 + input2); break;
	case -: printf("%d", input1 - input2); break;
	case* : printf("%d", input1 * input2); break;
	}
}