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
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &input1);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &oper);
//	printf("두 번쨰 계산할 값 ==> ");
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
//	printf("지금 몇 월인가요? ==> ");
//	scanf("%d" , &month);
//	switch (month)
//	{
//	case 1: printf("January입니다.");
//		break;
//	case 2: printf("February입니다.");
//		break;
//	case 3: printf("March입니다.");
//		break;
//	case 4: printf("April입니다.");
//		break;
//	case 5: printf("May입니다.");
//		break;
//	case 6: printf("June입니다.");
//		break;
//	case 7: printf("July입니다.");
//		break;
//	case 8: printf("August입니다.");
//		break;
//	case 9: printf("September입니다.");
//		break;
//	case 10: printf("October입니다.");
//		break;
//	case 11: printf("November입니다.");
//		break;
//	case 12: printf("December입니다.");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command ;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽이동 \n");
//	scanf("%c" , &command);
//	switch (command)
//	{
//	case '<' :
//	case 'a' :
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>' : case 'd' :
//		printf("오른쪽으로 이동합니다.\n");
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
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d" , &number);
//
//	switch (number)
//	{
//	case 1 :
//		printf("새 게임 시작.\n");
//		break;
//	case 2 :
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option :
//		printf("옵션 세팅.\n");
//		break;
//	default :
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("0~9 사이에 숫자 입력 ==> ");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3:
//	case 6:
//	case 9:
//		printf("'짝'");
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
//		printf("알바벳 x 입력.\n");
//		break;
//	case 'X':
//		printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d" , &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d" , &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
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
//	printf("w a d s 중 하나 입력 ==> ");
//	scanf(" %c", &a);
//	switch (a)
//	{
//	case 'w': printf("'위 방향키를 입력하셨습니다.'");
//		break;
//	case 'a': printf("'좌 방향키를 입력하셨습니다.'");
//		break;
//	case 'd': printf("'우 방향키를 입력하셨습니다.");
//		break;
//	case 's': printf("'아래 방향키를 입력하셨습니다.'");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int appetizer, maindish, dessert;
//	printf("appetizer 1.캐비어 2.샐러드 3. 푸아그라\n");
//	printf("maindish 1. 스테이크 2. 생선요리 3. 양갈비\n");
//	printf("dessert 1. 케이크 2. 아이스크림 3. 초콜릿무스\n");
//	scanf("%d %d %d", &appetizer, &maindish, &dessert);
//	printf("주문한 음식은 ");
//	switch(appetizer)
//	{
//	case 1: printf("캐비어, ");
//		break;
//	case 2: printf("샐러드, ");
//		break;
//	case 3: printf("푸아그라, ");
//		break;
//	}
//	switch(maindish)
//	{
//	case 1: printf("스테이크, ");
//		break;
//	case 2: printf("생선요리, ");
//		break;
//	case 3: printf("양갈비, ");
//		break;
//	}
//	switch (dessert)
//	{
//	case 1: printf("케이크");
//		break;
//	case 2: printf("아이스크림");
//		break;
//	case 3: printf("초콜릿무스");
//		break;
//	}
//	printf("입니다.");
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
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
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
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
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
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
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
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력):");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{printf("소문자를 입력하셨습니다");}
//		else if(alphabet >= 'A' && alphabet <= 'Z')
//		{printf("대문자를 입력하셨습니다.\n");}
//		else { continue; }
//		printf("입력한 값 : %c\n", alphabet);
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int number, total = 0;
//	while (1) {
//		printf("양수를 입력해주세요(0입력시 종료);");
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