//#include <stdio.h>
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("1");
	//printf("\n");
	//printf(" ");
	//printf(" ");
	//printf("2");
	//printf("2");
	//printf("\n");
	//printf(" ");
	//printf("3");
	//printf("3");
	//printf("3");
	//printf("\n");
	//printf("4");
	//printf("4");
	//printf("4");
	//printf("4");

	//for (int x = 1; x <= 3; x++)
	//{
	//	printf(" ");
	//}
	//
	//for (int x = 1; x <= 1; x++)
	//{
	//	printf("1");
	//}
	//printf("\n");
	//for (int x = 1; x <= 2; x++)
	//{
	//	printf(" ");
	//}
	//for (int x = 1; x <= 2; x++)
	//{
	//	printf("2");
	//}
	//printf("\n");
	//for (int x = 1; x <= 1; x++)
	//{
	//	printf(" ");
	//}
	//for (int x = 1; x <= 3; x++)
	//{
	//	printf("3");
	//}
	//printf("\n");
	//for (int x = 1; x <= 0; x++)
	//{
	//	printf(" ");
	//}
	//for (int x = 1; x <= 4; x++)
	//{
	//	printf("4");
	//}
	//int y = 3;
	//int a = 1;
	//for (int x = 1; x <= y; x++)
	//{
	//	printf(" ");
	//}
	//y -= 1;
	//for(int x = 1; x <= a; x++)
	//printf("1");
	//a += 1;
	//printf("\n");
	//for (int x = 1; x <= y; x++)
	//{
	//	printf(" ");
	//}
	//y -= 1;
	//for (int x = 1; x <= a; x++)
	//	printf("2");
	//a += 1;
	//printf("\n");
	//for (int x = 1; x <= y; x++)
	//{
	//	printf(" ");
	//}
	//y -= 1;
	//for (int x = 1; x <= a; x++)
	//	printf("3");
	//a += 1;
	//printf("\n");
	//for (int x = 1; x <= y; x++)
	//{
	//	printf(" ");
	//}
	//y -= 1;
	//for (int x = 1; x <= a; x++)
	//	printf("4");
	//a += 1;

	//int y = 3;
	//int a = 1;

	//for (; y >= 0;) 
	//{
	//	for (int x = 1; x <= y; x++)
	//	{
	//		printf(" ");
	//	}
	//	for (int x = 1; x <= a; x++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//	y -= 1;
	//	a += 1;
	//}
	// 
	//int a = 1;

	//for (int y = 3; y >= 0; y -= 1)
	//{
	//	for (int x = 1; x <= y; x++)
	//	{
	//		printf(" ");
	//	}
	//	for (int x = 1; x <= a; x++)
	//	{
	//		printf("%d", a);
	//	}
	//	a += 1;
	//	printf("\n");
	//}
	//int LINE = 4;
	//int y = 3;

	//for (int a = 1; a <= LINE; a += 1)
	//{
	//	for (int x = 1; x <= y; x++)
	//	{
	//		printf(" ");
	//	}
	//	for (int x = 1; x <= a; x++)
	//	{
	//		printf("%d", a);
	//	}
	//	y -= 1;
	//	printf("\n");
	//}
//	int LINE = 4;
//	scanf("%d", &LINE);
//	int y = LINE - 1;
//
//	for (int a = 1; a <= LINE; a += 1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= a; x++)
//		{
//			printf("%d", a);
//		}
//		y -= 1;
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//
//	int input = 0;
//
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//
//	int player = 0;
//	for (;;)
//	{
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c : ", 'A' + player);
//			scanf("%d", &input);
//		}
//		printf("턴이 넘어갑니다.\n");
//
//		player = !player;
//	}
//}


//#include <stdio.h>
//int main()
//{
//
//	int input = 0;
//
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게임을 시작합니다! : 31을 말하는 사람이 지게됩니다.\n");
//
//	int player = 0;
//	for (;;)
//	{
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c : ", 'A' + player);
//			scanf("%d", &input);
//			if (input >= 31) {
//				break;
//			}
//		}
//		player = !player;
//		if (input >= 31) {
//			break;
//		}
//		printf("턴이 넘어갑니다.\n");
//	}
//	printf("유저 %c의 승리입니다!", 'A' + player);
//}
//#include <stdio.h>
//int main()
//{
//
//	int input = 0;
//
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게임을 시작합니다! : 31을 말하는 사람이 지게됩니다.\n");
//
//	int player = 0;
//	int input2 = 1;
//	for (;;)
//	{
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("지금 입력해야하는 값은 %d입니다.\n", input2);
//			input2++;
//			printf("%c : ", 'A' + player);
//			scanf("%d", &input);
//			if (input >= 31) {
//				break;
//			}
//		}
//		player = !player;
//		if (input >= 31) {
//			break;
//		}
//		printf("턴이 넘어갑니다.\n");
//	}
//	printf("유저 %c의 승리입니다!", 'A' + player);
//}
//#include <stdio.h>
//int main()
//{
//
//	int input = 0;
//
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게임을 시작합니다! : 31을 말하는 사람이 지게됩니다.\n");
//
//	int player = 0;
//	int input2 = 1;
//	for (;;)
//	{
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c : ", 'A' + player);
//			scanf("%d", &input);
//			if (input != input2)
//			{
//				printf("잘못된 입력입니다\n");
//				printf("지금 입력해야하는 값은 %d입니다.\n", input2);
//				x--;
//				continue;
//				
//			}
//			input2++;
//			if (input >= 31) {
//				break;
//			}
//		}
//		player = !player;
//		if (input >= 31) {
//			break;
//		}
//		printf("턴이 넘어갑니다.\n");
//	}
//	printf("유저 %c의 승리입니다!", 'A' + player);
//}
//#include <stdio.h>
//int main()
//{
//
//	int input = 0;
//
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게임을 시작합니다! : 31을 말하는 사람이 지게됩니다. (0 입력시 턴 넘김)\n");
//
//	int player = 0;
//	int input2 = 1;
//	for (;;)
//	{
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c : ", 'A' + player);
//			scanf("%d", &input);
//			if (input == 0)
//			{
//				if (x == 1)
//				{
//					printf("턴을 넘기기 위해서는 하나 이상의 수를 말해야 합니다.\n");
//					x--;
//					continue;
//				}
//				else
//				{
//					break;
//				}
//			}
//			if (input != input2)
//			{
//				printf("잘못된 입력입니다\n");
//				printf("지금 입력해야하는 값은 %d입니다.\n", input2);
//				x--;
//				continue;
//
//			}
//			input2++;
//			if (input >= 31) {
//				break;
//			}
//		}
//		player = !player;
//		if (input >= 31) {
//			break;
//		}
//		printf("턴이 넘어갑니다.\n");
//	}
//	printf("유저 %c의 승리입니다!", 'A' + player);
//}
//#include <stdio.h>
//
//int main()
//{
//	float conversion = 0;
//	while (conversion < 2)
//	{
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	for (double conversion = 90; conversion > 0.1; conversion /= 3)
//	{
//		if (conversion == 10.0) {
//			continue;
//		}
//		printf("%.31f\n", conversion);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	while (1) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("프로그램 종료 \n");
//			break;
//		}
//	}
//	return 0;
//}
// 
//#include <stdio.h>
//
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}