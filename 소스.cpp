//#include <stdio.h>
//
//void main()
//{
//	int a = 100;
//
//	while (a == 200)
//	{
//		printf("whilie���� ���ο� ��� �Խ��ϴ�.\n");
//	}
//
//	do {
//		printf("do ~ while�� ���ο� ��� �Խ��ϴ�.\n");
//	} while (a == 200);
//}
//#define _CHT_SECURE_NO_WARNIUNGS
//#include <stdio.h>
//void main()
//{
//	int menu;
//
//	do {
//		printf("\n�մ� �ֹ��Ͻðڽ��ϱ�? \n");
//		printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸� ��ų���� ==> ");
//		scanf("%d", &menu);
//		switch(menu)
//		{
//		case 1: printf("#ī��� �ֹ��ϼ̽��ϴ�.\n"); break;
//		case 2: printf("#īǪġ�� �ֹ��ϼ̽��ϴ�.\n"); break;
//		case 3: printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�.\n"); break;
//		case 4: printf("�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�.\n"); break;
//		default: printf("�߸� �ֹ��ϼ̽��ϴ�.\n");
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
//		printf("���� �� �� �Է� (���߷��� 0�� �Է�) : ");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//		printf("%d + %d = %d\n", a, b, a + b);
//	}
//		printf("0�� �Է��ؼ� for���� Ż���߽��ϴ�.\n");
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
//	printf(" 1 ~ 100������ ��(3�� ��� ����): %d\n", hap);
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
//	printf("ù���� : %d\n", randInt);
//	printf("�������� : %d\n", nextInt);
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
		printf("\n%d��° �� !\n", ++day);
		printf("���õ� �ڵ��ұ��?\n" );
		printf("�׿�. ������.\n >>");
		scanf("%d", &command);
		if (command != 1) break;
		int randInt = rand() % 5 + 1;

		switch (randInt) {
		case 1:
			printf("����� ���׿�.\n");
		case 3:
			printf("���������� ");
			break;
		case 2:
			printf("����� ������.\n");
		case 4:
			printf("ī�信�� ");
			break;
		case 5: printf("�п����� ");
		}
		printf("�ڵ� �����սô�.\n ");
		study++;
	} while (1);
	if (day <= 3) {
		printf("�״���Դϴ�...\n");
	}
	else {
		int level = study / 8;
		switch (level) {
		case 0 :
			printf("�ڵ������� �Ǿ����ϴ�.!\n");
			break;
		case 1:
			printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
			break;
		case 2:
			printf("Front �����ڰ� �Ǿ����ϴ�.!\n");
		case 3:
			printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n");
		default:
			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
			break;
		}
	}
	return 0;
}