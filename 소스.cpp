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
//	printf("입력한 문자는");
//	if (intial >= 0x61 && intial <= 0x7a)
//	{
//		printf(" 소문자입니다.");
//	}
//	else if (intial >= 65 && intial <='Z')
//	{
//		printf(" 대문자입니다.");
//	}
//	else
//	{
//		printf(" 소문자도 대문자도 아니다.");
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
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
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
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 2가 같습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다.\n");
//	}
//	else {
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다.\n");
//	}
//	else {
//		printf("number는 0입니다.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
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
//		printf("'위 방향키를 입력하셨습니다.'");
//	}
//	else if (a == 'a') {
//		printf("'좌 방향키를 입력하셨습니다.'");
//	}
//	else if (a == 'd') {
//		printf("우 방향키를 입력하셨습니다.'");
//	}
//	else if (a == 's') {
//		printf("'아래 방향키를 입력하셨습니다.'");
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
//		printf("input은 3의 배수입니다. ");
//		if (input % 6 == 0) {
//			printf("input은 6의 배수입니다. ");
//		}
//		if (input % 9 == 0) {
//			printf("input은 9의 배수입니다. ");
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
//		printf("아이템창 오픈\n");
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
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
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
//	case 'i': printf("아이템창 오픈\n");
//	case 'm': printf("지도창 오픈\n");
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
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도 창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
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
	printf("첫 번쩨 계산할 값 ==>");
	scanf("%d", &input1);
	printf("두 번째 계산할 값 ==>");
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