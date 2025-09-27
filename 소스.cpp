//#include <stdio.h>
//
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//void main()
//{
//	const int N = 2;
//	SNACK snacks[N] = { {1500, 3, "레몬칩"}, {1000, 2, "달고나"} };
//	
//	printf("<<과자자판기!>>\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//	int choice;
//	scanf("%d", &choice);
//	printf("%s가 나왔습니다.\n", snacks[choice-1].name);
//}
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//struct ramen {
//	int price;
//	int stock;
//	char name[30];
//};
//
//void main()
//{
//	const int N = 4;
//	srand((unsigned int) time(NULL));
//	ramen ramens[4] = { {12000, rand() % 10, "짜파게티"}, {1000, rand() %10, "진라면 순한맛"}, {1000, rand() % 10, "팔도비빔면"}, {1000, rand() % 10, "너구리"}};
//
//	printf("<<라면 자판기>>\n");
//
//	int choice;
//	int sum = 0;
//	int yn = 1;
//	int money = 0;
//	int i = 0;
//	for (;yn;)
//	{
//		printf("\n");
//		for (int i = 0; i < N; i++)
//		{
//			printf("%d번 [%6s] %4d원 (%d개남음)\n", (i + 1), ramens[i].name, ramens[i].price, ramens[i].stock);
//		}
//		printf("\n");
//		printf("몇 번 음식을 주문하시겠습니까?\n");
//		scanf("%d", &choice);
//		if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
//		{
//			printf("시스템에 에러가 생겨 종료합니다\n");
//			return;
//		}
//		if (ramens[choice - 1].stock == 0)
//		{
//			printf("재고가 다 떨어졌습니다.\n");
//		}
//		else
//		{
//			printf("%s가 장바구니에 들어갔습니다.\n", ramens[choice - 1].name);
//			--ramens[choice - 1].stock;
//			sum += ramens[choice - 1].price;
//		}
//		printf("\n");
//		printf("더 주문하실 건가요? (NO = 0)\n");
//		scanf("%d", &yn);
//	}
//	int moneysum = 0;
//	printf("총 %d원 결제하겠습니다.\n", sum);
//	printf("\n");
//	printf("돈을 넣어주세요.\n");
//	for (;;)
//	{
//		scanf("%d", &money); 
//		if (money < 0)
//		{
//			printf("확인되지 않는 돈입니다.\n");
//			printf("다른 돈을 넣어주세요.\n");
//		}
//		else if ((money + moneysum) < sum)
//		{
//			printf("돈을 더 넣어주세요.\n");
//			moneysum += money;
//		}
//		else
//		{
//			moneysum += money;
//			printf("잔돈 %d원이 투입구에서 나왔습니다.\n", moneysum - sum);
//			printf("이용해주셔서 감사합니다.\n");
//			break;
//		}
//	}
//}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
struct ramen {
	int price;
	int stock;
	char name[30];
};

void main()
{
	const int N = 4;
	srand((unsigned int)time(NULL));
	ramen ramens[4] = { {1200, rand() % 10, "짜파게티"}, {1000, rand() % 10, "진라면 순한맛"}, {1000, rand() % 10, "팔도비빔면"}, {1000, rand() % 10, "너구리"} };

	printf("<<라면 자판기>>\n");

	int choice;
	int yn = 1;
	int money = 0;
	int number = 0;
	int yn2;
	for (int i = 0; i < N; i++)
	{
		printf("%d번 [%6s] %4d원 (%d개남음)\n", (i + 1), ramens[i].name, ramens[i].price, ramens[i].stock);
	}

	int moneysum = 0;
	printf("\n");
	printf("돈을 넣어주세요.\n");
	for (;(money + moneysum)<1000;)
	{
		scanf("%d", &money);
		if (money < 0)
		{
			printf("확인되지 않는 돈입니다.\n");
			printf("다른 돈을 넣어주세요.\n");
		}
		else if ((money + moneysum) < 1000)
		{
			printf("돈을 더 넣어주세요.\n");
			moneysum += money;
		}
	}
	moneysum += money;
	printf("%d", moneysum);
	money = 0;
	for (; yn;)
	{
		printf("\n");
		if(number != 0)
		for (int i = 0; i < N; i++)
		{
			printf("%d번 [%6s] %4d원 (%d개남음)\n", (i + 1), ramens[i].name, ramens[i].price, ramens[i].stock);
		}
		printf("음식을 주문하시겠습니까?\n");
		scanf("%d", &choice);
		number++;
		if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
		{
			printf("시스템에 에러가 생겨 종료합니다\n");
			return;
		}
		if (ramens[choice - 1].stock == 0)
		{
			printf("재고가 다 떨어졌습니다.\n");
		}
		else if (ramens[choice - 1].price > moneysum)
		{
			printf("돈이 %d원 더 적습니다.\n", ramens[choice - 1].price - moneysum);
			printf("돈을 더 넣을까요?(NO = 0)\n");
			scanf("%d", &yn2);
			if (yn2 == 0)
			{
				printf("잔돈 %d원이 투입구에서 나왔습니다.\n", moneysum);
				return;
			}
			for (; (money + moneysum) < ramens[choice - 1].price;)
			{
				scanf("%d", &money);
				if (money < 0)
				{
					printf("확인되지 않는 돈입니다.\n");
					printf("다른 돈을 넣어주세요.\n");
				}
				else
				{
					moneysum += money;
				}
			}
		}
		else
		{
			printf("%s가 나왔습니다.\n", ramens[choice - 1].name);
			--ramens[choice - 1].stock;
			moneysum -= ramens[choice - 1].price;
			printf("\n");
		}
		printf("더 주문하실 건가요? (NO = 0)\n");
		scanf("%d", &yn);
	}
			printf("잔돈 %d원이 투입구에서 나왔습니다.\n", moneysum);
			printf("이용해주셔서 감사합니다.\n");
}