//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("������ �Է��ϼ��� :");
//	scanf("%d", &a);
//
//	if (a % 3 == 0)
//		printf("3�� ����Դϴ�.");
//	else
//		printf("3�� ����� �ƴմϴ�.");
//}

//#include<stdio.h>
//
//int main()
//{
//	char ch;
//
//	printf("A, B, C Ű �� �ϳ��� ������ Enter�� �������� :");
//	scanf(" %c", &ch);
//
//	switch (ch)
//	{
//	case 'a':
//	case 'A':
//		printf("A Ű�� �������ϴ�. \n");		break;
//	case 'b':
//	case 'B':
//		printf("B Ű�� �������ϴ�. \n"); break;
//	case 'c':
//	case 'C':
//		printf("C Ű�� �������ϴ�. \n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch = 'Z';
//
//	if (ch == 'A')
//		printf("A ��� \n");
//	else if (ch == 'B')
//		printf("B ��� \n");
//	else if (ch == 'C')
//		printf("C ��� \n");
//	else
//		printf("�� \n");
//}
//#include <stdio.h>
//int main()
//{
//	int a = 100;
//
//	if (a != 100)
//		printf("100 �ƴϳ׿�.\n");
//	printf("�ƽ��׿�\n");
//
//	printf("���α׷��� �����մϴ�\n");
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 10;
//	int c = 1;
//	while (b) {
//		a = a * c;
//		c++;
//		b--;
//	}
//	printf("%d", a);
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	while (1) {
//		a = a * b;
//		if (a >= 50000)
//		{break;}
//		++b;
//	}
//	printf("%d", b);
//}
//#include <stdio.h>
//
//int main()
//{
//	char a = 'A';
//	while (a <= 'Z') {
//		if (a == 'F')
//		{
//			a = a + 1;
//		}
//		printf("%c", a);
//		++a;
//	}
//}
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
//		if (number >= 4 && number <= 0) {
//			printf("4�̻��� ���� �ȵ˴ϴ�\n");
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