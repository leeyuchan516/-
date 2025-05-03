//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int hap = 0;
//
//	i = 1;
//	while (i <= 100)
//	{
//		if(i % 5 == 0 || i % 8 == 0)
//			hap = hap + i;
//		i++;
//	}
//	printf("%d", hap);
//}
//#include <stdio.h>
//int main()
//{
//	int i, k;
//	i = 0;
//	while (i < 3) {
//		k = 0;
//		while (k < 4) {
//			printf("중첩 while문\n");
//			k++;
//		}
//		i++;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int input1, input2, big, small;//c는 큰 수 d는 작은 수//
//
//	printf("시작값 ==> ");
//	scanf("%d", &input1);
//	printf("끝값 ==> ");
//	scanf("%d", &input2);
//
//	if (input1 > input2)
//	{
//		big = input1;
//		small = input2;
//	}
//	else {
//		small = input1;
//		big = input2;
//	}
//
//	while (big >= small) {
//		if (small % 2 != 0) {
//			printf("%d ", small);
//		}
//		small++;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	int b = 1;
//	printf("숫자를 여러 개 입력 : ");
//	scanf("%d", &a);
//
//	int num = a;
//
//	while (a >= 10)
//	{
//		a = a / 10;
//		b = b * 10;
//	}
//	//printf("%d", b);
//
//	while (b > 0)
//	{
//		a = num / b;
//		num = num % b;
//		a = 2 * a;
//		while (a > 0) {
//			printf("\u2665");
//			a--;
//		}
//		printf("\n");
//		b = b / 10;
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++);
//	{
//		printf("%d", count);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 11; count <= 200; count+= 11)
//	{
//			printf("%d", count);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float sqLine;
//	for (sqLine = 0.1; sqLine * 4 <= 21; sqLine += 0.1) {
//		printf("%.1f\n", sqLine);
//	}
//	return 0;
//}
//#include <Stdio.h>
//
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++) {
//
//		for (student = 1; student <= 3; student++); {
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}
//#include <Stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++) {
//		for (student = 1; student <= 30; student++) {
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	int number2;
//
//	for (number = 2; number <= 9; number++)
//	{
//		if (number == 3)
//		{
//			continue;
//		}
//		for (number2 = 1; number2 <= 9; number2++)
//		{
//			printf("%d * %d = %2d\n", number, number2, number * number2);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int dice4;
//	int dice6;
//
//	for (dice4 = 1; dice4 <= 4; dice4++)
//	{
//		for (dice6 = 1; dice6 <= 6; dice6++)
//		{
//			printf("%d면 - %d\n", dice4, dice6);
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		printf("%d번째 내부 반복문 진입 \n", outer);
//		for (inter = 0; inter < 5; inter++) {
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈칠\n\n", outer);
//	}
//}