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
//	printf("<����Ų ��� 31!>\n");
//	printf("������ �����մϴ�! : �ڿ� ���ڸ� �Է����ּ���.\n");
//
//	int player = 0;
//	for (;;)
//	{
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c : ", 'A' + player);
//			scanf("%d", &input);
//		}
//		printf("���� �Ѿ�ϴ�.\n");
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
//	printf("<����Ų ��� 31!>\n");
//	printf("������ �����մϴ�! : 31�� ���ϴ� ����� ���Ե˴ϴ�.\n");
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
//		printf("���� �Ѿ�ϴ�.\n");
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + player);
//}
//#include <stdio.h>
//int main()
//{
//
//	int input = 0;
//
//	printf("<����Ų ��� 31!>\n");
//	printf("������ �����մϴ�! : 31�� ���ϴ� ����� ���Ե˴ϴ�.\n");
//
//	int player = 0;
//	int input2 = 1;
//	for (;;)
//	{
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", input2);
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
//		printf("���� �Ѿ�ϴ�.\n");
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + player);
//}
//#include <stdio.h>
//int main()
//{
//
//	int input = 0;
//
//	printf("<����Ų ��� 31!>\n");
//	printf("������ �����մϴ�! : 31�� ���ϴ� ����� ���Ե˴ϴ�.\n");
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
//				printf("�߸��� �Է��Դϴ�\n");
//				printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", input2);
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
//		printf("���� �Ѿ�ϴ�.\n");
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + player);
//}
//#include <stdio.h>
//int main()
//{
//
//	int input = 0;
//
//	printf("<����Ų ��� 31!>\n");
//	printf("������ �����մϴ�! : 31�� ���ϴ� ����� ���Ե˴ϴ�. (0 �Է½� �� �ѱ�)\n");
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
//					printf("���� �ѱ�� ���ؼ��� �ϳ� �̻��� ���� ���ؾ� �մϴ�.\n");
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
//				printf("�߸��� �Է��Դϴ�\n");
//				printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", input2);
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
//		printf("���� �Ѿ�ϴ�.\n");
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + player);
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
//			printf("���α׷� ���� \n");
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