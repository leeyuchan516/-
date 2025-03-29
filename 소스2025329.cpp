//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k);
//	printf("두 번쨰 계산할 값 ==>");
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
//		printf("0으로 나누면 안됩니다. \n");
//}
//
//if (k == '%') {
//	if (b != 0) {
//		result = a % b;
//		printf("%d %% %d = %d \n", a, b, result);
//	}
//	else
//		printf("0으로 나누면 나머지값이 안됩니다. \n");
//}
//}
//#include <stdio.h>
//
//void main()
//{
//	printf("\n줄 바꿈\n연습 \n");
//	printf("\t탭키\t연습 \n");
//	printf("이것을\r덮어씁니다.\n");
//	printf("\a\a\a삐소리 3번 \n");
//	printf("글자가 \"강조\"되는 효과 \n");
//	printf("\\\\\\ 역슬래시 세 개 출력 \n");
//}
//#include <stdio.h>
//
//int main()
//{
//	int x;
//	int fifty;
//	printf("나누어지는 값 입력 : ");
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
//	printf("1000원 미만의 젤리의 가격을 입력해주세요.(원)");
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
//	printf("거스름돈은 500원 %d개, ", change500);
//	printf("100원 %d개, ", chage100);
//	printf("50원 %d개, ", change50);
//	printf("10원 %d개, ", change10);
//	printf("나머지는 옛날동전입니다.");
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
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
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
//	printf("첫숫자 : %d\n", randInt);//0-9
//	printf("다음숫자 : %d", nextInt);//50-
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
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d원입니다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf(" %d원이다.", coin500+ coin100);
//	printf("\n나는 과자를 살 수 있을까?");
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
//		printf("apple은 0개가 아닙니다.\n");
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
//		printf("apple은 하나도 없습니다.\n");
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
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
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
//			printf("apple은 하나도 없습니다.\n");
//	}
//		else
//		{
//			printf("apple은 0개가 아닙니다.\n");
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
//		printf("input은 음수입니다.\n");
//	}
//	else if (input > 0)
//	{
//		printf("input은 양수입니다.\n");
//	}
//	else
//	{
//		printf("input은 0입니다.\n");
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
//		printf("input은 두 자리 숫자입니다.\n");
//	}
//	else
//	{
//		printf("input은 두자리 숫자가 아닙니다.\n");
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
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
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
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
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
//	printf("너는 ");
//
//	if (y_age >= 15)
//	{
//		printf("15세 관람가, ");
//	}
//	if (y_age >= 12)
//	{
//		printf("12세 관람가, ");
//	}
//
//	printf("전체관람가를 볼 수 있습니다.\n");
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
//		printf("소문자\n");
//	}
//	else
//	{
//		printf("대문자\n");
//	}
//	return 0;
//}