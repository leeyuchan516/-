//#include <stdio.h>
//int main()
//{
//	int number;
//	int total = 0;
//	char player = 0;
//	printf("����Ų��� ������ �����ϰڽ��ϴ�. \n");
//	while (1) {
//		printf("%c : ",'A'+ player);
//		scanf("%d", &number);
//		if (number > 3 || number < 1)
//		{
//			printf("1,2,3�� �Է��� �� �ֽ��ϴ�.\n");
//			printf("�ٽ� �Է��� �ּ���\n");
//			continue;
//		}
//		total = number + total;
//		printf("==> %d\n", total);
//		player = !player;
//		if (total >= 31) {
//		 break;
//		}
//	}
//		printf("%c�� �̰���ϴ�!\n", 'A' + player); 
//}
//#include <stdio.h>
//
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("���� �µ� : %d\n", temperature);
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
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ� (0:��������)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("�� ���� ����\n");
//			break;
//		case LOADGAME:
//			printf("���̺� ������ �ε�\n");
//			break;
//		case OPTION:
//			printf("�ɼ� ����\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("������ �����մϴ�.\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int select;
//	do {
//		printf("\n����� �������̽� �����\n");
//		printf("1.�α���\n2.�̾��ϱ�\n3.�ɼ�\n4.���� �����\n");
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
//		printf("\n%d��° �� !\n", ++day);
//		printf("���õ� �� �ұ��?\n");
//		printf("1. �ڵ� �����Ѵ�.\n");
//		printf("2. ���.\n");
//		printf("3. ���� �մϴ�.\n");
//		printf("�׿�. ������.\n >>");
//		scanf("%d", &command);
//		if (command > 3 || command < 1) break;
//		int randInt = rand() % 5 + 1;
//		if (command == 1)
//		{
//			switch (randInt) {
//			case 1:
//				printf("����� ���׿�.\n");
//			case 3:
//				printf("���������� ");
//				break;
//			case 2:
//				printf("����� ������.\n");
//			case 4:
//				printf("ī�信�� ");
//				break;
//			case 5: printf("�п����� ");
//			}
//			printf("�ڵ� �����սô�.\n ");
//			study++;
//		}
//		else if (command == 2)
//		{
//			switch (randInt) {
//			case 1 :
//				printf("����� ���� ���ƿ�.\n");
//			case 3:
//				printf("������ ");
//				break;
//			case 2:
//				printf("����� ���ƿ�.\n");
//			case 4:	printf("ģ�����̶� ");
//				break;
//			case 5:printf("���̵��꿡�� ");
//				break;
//			}printf("��ƿ�.\n");
//			play++;
//		}
//		else if (command == 3)
//		{
//			switch (randInt) {
//			case 1:
//				printf("����� ���ƿ�.\n");
//			case 3:
//				printf("������ ");
//				break;
//			case 2:
//				printf("����� ���� ���ƿ�.\n");
//			case 4:
//				printf("�ǽù濡�� ");
//				break;
//			case 5:
//				printf("ģ���� ������ ");
//				break;
//			}
//			printf("�� �սô�.\n");
//			LoL++;
//		}
//		} while (1);
//	if (day <= 3) {
//		printf("�״���Դϴ�...\n");
//	}
//	else if (study >= play && study >= LoL)
//		{
//		int level = study / 8;
//		switch (level) {
//		case 0:
//			printf("�ڵ������� �Ǿ����ϴ�.!\n");
//			break;
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
//			break;
//		case 2:
//			printf("Front �����ڰ� �Ǿ����ϴ�.!\n");
//		case 3:
//			printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n");
//		default:
//			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
//			break;
//		}
//	}
//	else if (play >= study && play >= LoL) 
//	{
//		int level = study / 5;
//		switch (level) {
//		case 0:
//			printf("����� ��� ���� �����ϴ� �ϴ� ȸ����� �Ǿ����ϴ�.\n");
//			break;
//		case 1:
//			printf("����� ��� ���� ���� �����ϴ� ȸ����� �Ǿ����ϴ�.\n");
//			break;
//		case 2:
//			printf("����� �����ð��� ��⸸ �ϴ� ������ ȸ����� �Ǿ����ϴ�.\n");
//			break;
//		default:
//			printf("����� ���￪ ����ڰ� �Ǿ����ϴ�.\n");
//			break;
//		}
//	}
//	else if (LoL >= play && LoL >= study) 
//	{
//		int level = study / 5;
//		switch (level) {
//		case 0:
//			printf("����� LoL�� �����ϴ� ȸ����� �Ǿ����ϴ�.\n");
//		case 1:
//			printf("����� LoL�� ���ϴ� ȸ����� �Ǿ����ϴ�.\n");
//			break;
//		case 2: 
//			printf("����� LoL���� �����ִ� ������ ȸ����� �Ǿ����ϴ�.\n");
//			break;
//		default:
//			printf("����� �� 2�� ����Ŀ�� �Ǿ����ϴ�!!!");
//			break;
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("�� %d����\n", sheep);
//	}
//	printf("������!\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) 
//	{
//		printf("�� %d����\n", sheep);
//		if (sheep == 3) {
//			printf("���߿� ������!\n");
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
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}
//#include <Stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d ����\n", sheep);
//		if (sheep == 45) {
//			printf("���߿� ������.\n");
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
//		printf("���� %d\n", round);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++) 
//	{
//		printf("����Ʈ %d��\n", count);
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
//	printf("���� %d\n", sum_number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("�ݺ��� Ƚ���� �Է��ϼ��� :");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("�߾�");
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
//	printf("100 ������ �������� ����մϴ�.\n");
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
//	printf("1���� 10���� ���� �� ��� : ");
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
//	printf("1���� 10���� ���� �� ��� : ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//	
//	}
//	printf("%d\n", number);
//	return 0;
//}
