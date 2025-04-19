//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("정수를 입력하세요 :");
//	scanf("%d", &a);
//
//	if (a % 3 == 0)
//		printf("3의 배수입니다.");
//	else
//		printf("3의 배수가 아닙니다.");
//}

//#include<stdio.h>
//
//int main()
//{
//	char ch;
//
//	printf("A, B, C 키 중 하나를 누르고 Enter를 누르세요 :");
//	scanf(" %c", &ch);
//
//	switch (ch)
//	{
//	case 'a':
//	case 'A':
//		printf("A 키를 눌렀습니다. \n");		break;
//	case 'b':
//	case 'B':
//		printf("B 키를 눌렀습니다. \n"); break;
//	case 'c':
//	case 'C':
//		printf("C 키를 눌렀습니다. \n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch = 'Z';
//
//	if (ch == 'A')
//		printf("A 출력 \n");
//	else if (ch == 'B')
//		printf("B 출력 \n");
//	else if (ch == 'C')
//		printf("C 출력 \n");
//	else
//		printf("모름 \n");
//}
//#include <stdio.h>
//int main()
//{
//	int a = 100;
//
//	if (a != 100)
//		printf("100 아니네요.\n");
//	printf("아쉽네요\n");
//
//	printf("프로그램을 종료합니다\n");
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
//	printf("베스킨라빈스 게임을 시작하겠습니다. \n");
//	while (1) {
//		printf("%c : ",'A'+ player);
//		scanf("%d", &number);
//		if (number >= 4 && number <= 0) {
//			printf("4이상의 수는 안됩니다\n");
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