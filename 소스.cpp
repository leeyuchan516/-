//#include <stdio.h>
//
//void main()
//{
//	int a = 100;
//
//	while (a == 200)
//	{
//		printf("whilie문은 내부에 들어 왔습니다.\n");
//	}
//
//	do {
//		printf("do ~ while문 내부에 들어 왔습니다.\n");
//	} while (a == 200);
//}
//#define _CHT_SECURE_NO_WARNIUNGS
//#include <stdio.h>
//void main()
//{
//	int menu;
//
//	do {
//		printf("\n손님 주문하시겠습니까? \n");
//		printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>그만 시킬래요 ==> ");
//		scanf("%d", &menu);
//		switch(menu)
//		{
//		case 1: printf("#카페라떼 주문하셨습니다.\n"); break;
//		case 2: printf("#카푸치노 주문하셨습니다.\n"); break;
//		case 3: printf("#아메리카노 주문하셨습니다.\n"); break;
//		case 4: printf("주문하신 커피 준비하겠습니다.\n"); break;
//		default: printf("잘못 주문하셨습니다.\n");
//		}
//	} while (menu != 4);
//}
//#define _CHT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("더할 두 수 입력 (멈추려면 0을 입력) : ");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//		printf("%d + %d = %d\n", a, b, a + b);
//	}
//		printf("0을 입력해서 for문을 탈출했습니다.\n");
//	
//}
//#include <stdio.h>
//
//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//				continue;
//
//		hap += i;
//	}
//
//	printf(" 1 ~ 100까지의 합(3의 배수 제외): %d\n", hap);
//}	
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);
//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	do {
		printf("\n%d번째 날 !\n", ++day);
		printf("오늘도 코딩할까요?\n" );
		printf("그외. 끝낸다.\n >>");
		scanf("%d", &command);
		if (command != 1) break;
		int randInt = rand() % 5 + 1;

		switch (randInt) {
		case 1:
			printf("기분이 좋네요.\n");
		case 3:
			printf("도서관에서 ");
			break;
		case 2:
			printf("기분이 나빠요.\n");
		case 4:
			printf("카페에서 ");
			break;
		case 5: printf("학원에서 ");
		}
		printf("코딩 공부합시다.\n ");
		study++;
	} while (1);
	if (day <= 3) {
		printf("그대로입니다...\n");
	}
	else {
		int level = study / 8;
		switch (level) {
		case 0 :
			printf("코딩새싹이 되었습니당.!\n");
			break;
		case 1:
			printf("프로그래머가 되었습니다.!\n");
			break;
		case 2:
			printf("Front 개발자가 되었습니다.!\n");
		case 3:
			printf("BackEnd 개발자가 되었습니다.!\n");
		default:
			printf("풀스택 개발자가 되었습니다.!\n");
			break;
		}
	}
	return 0;
}