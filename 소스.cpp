//#include <stdio.h>
//int main()
//{
//	int number;
//	int total = 0;
//	char player = 0;
//	printf("베스킨라빈스 게임을 시작하겠습니다. \n");
//	while (1) {
//		printf("%c : ",'A'+ player);
//		scanf("%d", &number);
//		if (number > 3 || number < 1)
//		{
//			printf("1,2,3만 입력할 수 있습니다.\n");
//			printf("다시 입력해 주세요\n");
//			continue;
//		}
//		total = number + total;
//		printf("==> %d\n", total);
//		player = !player;
//		if (total >= 31) {
//		 break;
//		}
//	}
//		printf("%c가 이겼습니다!\n", 'A' + player); 
//}
//#include <stdio.h>
//
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도 : %d\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}
//#include <Stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("게임을 종료합니다.\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int select;
//	do {
//		printf("\n사용자 인터페이스 만들기\n");
//		printf("1.로그인\n2.이어하기\n3.옵션\n4.만든 사람들\n");
//		scanf("%d", &select);
//	} while (select <= 4 && select >= 1);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int play = 0;
//	int LoL = 0;
//
//	do {
//		printf("\n%d번째 날 !\n", ++day);
//		printf("오늘도 뭘 할까요?\n");
//		printf("1. 코딩 공부한다.\n");
//		printf("2. 놀다.\n");
//		printf("3. 롤을 합니다.\n");
//		printf("그외. 끝낸다.\n >>");
//		scanf("%d", &command);
//		if (command > 3 || command < 1) break;
//		int randInt = rand() % 5 + 1;
//		if (command == 1)
//		{
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5: printf("학원에서 ");
//			}
//			printf("코딩 공부합시다.\n ");
//			study++;
//		}
//		else if (command == 2)
//		{
//			switch (randInt) {
//			case 1 :
//				printf("기분이 아주 좋아요.\n");
//			case 3:
//				printf("집에서 ");
//				break;
//			case 2:
//				printf("기분이 좋아요.\n");
//			case 4:	printf("친구들이랑 ");
//				break;
//			case 5:printf("놀이동산에서 ");
//				break;
//			}printf("놀아요.\n");
//			play++;
//		}
//		else if (command == 3)
//		{
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋아요.\n");
//			case 3:
//				printf("집에서 ");
//				break;
//			case 2:
//				printf("기분이 아주 좋아요.\n");
//			case 4:
//				printf("피시방에서 ");
//				break;
//			case 5:
//				printf("친구네 집에서 ");
//				break;
//			}
//			printf("롤 합시다.\n");
//			LoL++;
//		}
//		} while (1);
//	if (day <= 3) {
//		printf("그대로입니다...\n");
//	}
//	else if (study >= play && study >= LoL)
//		{
//		int level = study / 8;
//		switch (level) {
//		case 0:
//			printf("코딩새싹이 되었습니다.!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다.!\n");
//			break;
//		case 2:
//			printf("Front 개발자가 되었습니다.!\n");
//		case 3:
//			printf("BackEnd 개발자가 되었습니다.!\n");
//		default:
//			printf("풀스택 개발자가 되었습니다.!\n");
//			break;
//		}
//	}
//	else if (play >= study && play >= LoL) 
//	{
//		int level = study / 5;
//		switch (level) {
//		case 0:
//			printf("당신은 노는 것을 좋아하는 하는 회사원이 되었습니다.\n");
//			break;
//		case 1:
//			printf("당신은 노는 것을 완전 좋아하는 회사원이 되었습니다.\n");
//			break;
//		case 2:
//			printf("당신은 업무시간에 놀기만 하는 가난한 회사원이 되었습니다.\n");
//			break;
//		default:
//			printf("당신은 서울역 노숙자가 되었습니다.\n");
//			break;
//		}
//	}
//	else if (LoL >= play && LoL >= study) 
//	{
//		int level = study / 5;
//		switch (level) {
//		case 0:
//			printf("당신은 LoL을 좋아하는 회사원이 되었습니다.\n");
//		case 1:
//			printf("당신은 LoL을 잘하는 회사원이 되었습니다.\n");
//			break;
//		case 2: 
//			printf("당신은 LoL에만 관심있는 가난한 회사원이 되었습니다.\n");
//			break;
//		default:
//			printf("당신은 제 2의 페이커가 되었습니다!!!");
//			break;
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) 
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}
//#include <Stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d 마리\n", sheep);
//		if (sheep == 45) {
//			printf("도중에 잠들었다.\n");
//			break;
//		}
//			
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++) 
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 :");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int number;
//	for (number = 10; number < 100; number++)
//	{
//		sum = sum + number;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum = 1;
//	for (number = 3; number <= 8; number++)
//	{
//		sum = sum * number;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number2;
//	int number;
//	for (number = 1; number <= 50; number++)
//	{
//		number2 = number % 10;
//		if (number2 % 3 == 0 && number2 != 0 || number / 10 == 3) 
//		{
//			printf("%d\n", number);
//		}
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	int exitFor;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//	
//	}
//	printf("%d\n", number);
//	return 0;
//}
