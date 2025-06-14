//#include <stdio.h>
//
//int main()
//{
//	char p;
//	int a, b, c;
//	
//	printf("연산 선택 (+ 또는 *) ==> ");
//	scanf("%c", &p);
//	printf("첫 번째 값 ==> ");
//	scanf("%d", &a);
//	printf("두 번째 값 ==> ");
//	scanf("%d", &b);
//	printf("세 번째 값 ==> ");
//	scanf("%d", &c);
//
//	if (p == '+')
//	{
//		printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
//	}
//	else if (p == '*')
//	{
//		printf("%d * %d * %d = %d", a, b, c, a * b * c);
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	printf("## 두 수를 나누기 ##\n");
//	printf("첫 번째 값 ==> ");
//	scanf("%d", &a);
//	printf("두 번째 값 ==> ");
//	scanf("%d", &b);
//	if (b == 0)
//	{
//		printf("다시 입력해주세요. 두 번째 값 ==> ");
//		scanf("%d", &b); 
//		if (b == 0)
//		{
//			printf("또 다시 입력해주세요. 두 번째 값 ==> ");
//			scanf("%d", &b);
//			if (b == 0) {
//				printf("0을 3번 입력했습니다. 종료합니다.\n");
//				return 0;
//			}
//		}
//	}
//	printf("%d / %d = %d", a, b, a / b);
//}
//#include <stdio.h>
//
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag)
//	{
//		printf("number = %d\n", number);
//		while (number++)
//		{
//			printf(" >number = %d\n", number);
//			if (number == 3)
//			{
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
//#include <stdio.h>
//
//int main()
//{
//	float conversion = 0;
//	for (; conversion < 2; conversion += 0.1) {
//		printf("%.1f\n", conversion + 0.1);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double conversion = 90;
//	while (conversion > 0.1)
//	{
//		
//		if (conversion == 10.0) {
//			conversion /= 3;
//			continue;
//		}
//		printf("%.31f\n", conversion);
//			conversion /= 3;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	for (double conversion = 90; //1
//		conversion > 0.1; //2 6 10 13
//		conversion /= 3)//5 9 12
//	{
//		if (conversion == 10.0) {//3 7 11
//			continue;
//		}
//		printf("%.31f\n", conversion);//4 8
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (;;)
//	{
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}
 