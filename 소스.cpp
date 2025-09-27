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
//	SNACK snacks[N] = { {1500, 3, "����Ĩ"}, {1000, 2, "�ް�"} };
//	
//	printf("<<�������Ǳ�!>>\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d�� (%d������)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//	int choice;
//	scanf("%d", &choice);
//	printf("%s�� ���Խ��ϴ�.\n", snacks[choice-1].name);
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
//	ramen ramens[4] = { {12000, rand() % 10, "¥�İ�Ƽ"}, {1000, rand() %10, "����� ���Ѹ�"}, {1000, rand() % 10, "�ȵ������"}, {1000, rand() % 10, "�ʱ���"}};
//
//	printf("<<��� ���Ǳ�>>\n");
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
//			printf("%d�� [%6s] %4d�� (%d������)\n", (i + 1), ramens[i].name, ramens[i].price, ramens[i].stock);
//		}
//		printf("\n");
//		printf("�� �� ������ �ֹ��Ͻðڽ��ϱ�?\n");
//		scanf("%d", &choice);
//		if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
//		{
//			printf("�ý��ۿ� ������ ���� �����մϴ�\n");
//			return;
//		}
//		if (ramens[choice - 1].stock == 0)
//		{
//			printf("��� �� ���������ϴ�.\n");
//		}
//		else
//		{
//			printf("%s�� ��ٱ��Ͽ� �����ϴ�.\n", ramens[choice - 1].name);
//			--ramens[choice - 1].stock;
//			sum += ramens[choice - 1].price;
//		}
//		printf("\n");
//		printf("�� �ֹ��Ͻ� �ǰ���? (NO = 0)\n");
//		scanf("%d", &yn);
//	}
//	int moneysum = 0;
//	printf("�� %d�� �����ϰڽ��ϴ�.\n", sum);
//	printf("\n");
//	printf("���� �־��ּ���.\n");
//	for (;;)
//	{
//		scanf("%d", &money); 
//		if (money < 0)
//		{
//			printf("Ȯ�ε��� �ʴ� ���Դϴ�.\n");
//			printf("�ٸ� ���� �־��ּ���.\n");
//		}
//		else if ((money + moneysum) < sum)
//		{
//			printf("���� �� �־��ּ���.\n");
//			moneysum += money;
//		}
//		else
//		{
//			moneysum += money;
//			printf("�ܵ� %d���� ���Ա����� ���Խ��ϴ�.\n", moneysum - sum);
//			printf("�̿����ּż� �����մϴ�.\n");
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
	ramen ramens[4] = { {1200, rand() % 10, "¥�İ�Ƽ"}, {1000, rand() % 10, "����� ���Ѹ�"}, {1000, rand() % 10, "�ȵ������"}, {1000, rand() % 10, "�ʱ���"} };

	printf("<<��� ���Ǳ�>>\n");

	int choice;
	int yn = 1;
	int money = 0;
	int number = 0;
	int yn2;
	for (int i = 0; i < N; i++)
	{
		printf("%d�� [%6s] %4d�� (%d������)\n", (i + 1), ramens[i].name, ramens[i].price, ramens[i].stock);
	}

	int moneysum = 0;
	printf("\n");
	printf("���� �־��ּ���.\n");
	for (;(money + moneysum)<1000;)
	{
		scanf("%d", &money);
		if (money < 0)
		{
			printf("Ȯ�ε��� �ʴ� ���Դϴ�.\n");
			printf("�ٸ� ���� �־��ּ���.\n");
		}
		else if ((money + moneysum) < 1000)
		{
			printf("���� �� �־��ּ���.\n");
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
			printf("%d�� [%6s] %4d�� (%d������)\n", (i + 1), ramens[i].name, ramens[i].price, ramens[i].stock);
		}
		printf("������ �ֹ��Ͻðڽ��ϱ�?\n");
		scanf("%d", &choice);
		number++;
		if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
		{
			printf("�ý��ۿ� ������ ���� �����մϴ�\n");
			return;
		}
		if (ramens[choice - 1].stock == 0)
		{
			printf("��� �� ���������ϴ�.\n");
		}
		else if (ramens[choice - 1].price > moneysum)
		{
			printf("���� %d�� �� �����ϴ�.\n", ramens[choice - 1].price - moneysum);
			printf("���� �� �������?(NO = 0)\n");
			scanf("%d", &yn2);
			if (yn2 == 0)
			{
				printf("�ܵ� %d���� ���Ա����� ���Խ��ϴ�.\n", moneysum);
				return;
			}
			for (; (money + moneysum) < ramens[choice - 1].price;)
			{
				scanf("%d", &money);
				if (money < 0)
				{
					printf("Ȯ�ε��� �ʴ� ���Դϴ�.\n");
					printf("�ٸ� ���� �־��ּ���.\n");
				}
				else
				{
					moneysum += money;
				}
			}
		}
		else
		{
			printf("%s�� ���Խ��ϴ�.\n", ramens[choice - 1].name);
			--ramens[choice - 1].stock;
			moneysum -= ramens[choice - 1].price;
			printf("\n");
		}
		printf("�� �ֹ��Ͻ� �ǰ���? (NO = 0)\n");
		scanf("%d", &yn);
	}
			printf("�ܵ� %d���� ���Ա����� ���Խ��ϴ�.\n", moneysum);
			printf("�̿����ּż� �����մϴ�.\n");
}