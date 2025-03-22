//#include <stdio.h>
//
//void main()
//{
//	int a;
//	float b;
//
//	a = 123.45;
//	b = 200;
//
//	printf("a의 값 ==> %d \n", a);
//	printf("b의 값 ==> %f \n", b);
//}
#include <stdio.h>

//void main()
//{
//	int a, b;
//	float c, d;
//
//	a = 100;
//	b = a;
//
//	c = 111.1f;
//	d = c;
//
//	printf("a, b의 값 ==> %d , %d \n", a, b);
//	printf("c, d의 값 ==> %5.1f , %5.1f \n", c, d);
//}
//#include <stdio.h>
//
//void main()
//{
//	int a, b, c, d;
//
//	a = 100 + 100;
//	b = a + 100;
//	c = a + b - 100;
//	d = a + b + c;
//	printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", a, b, c, d);
//
//	a = b = c = d = 100;
//	printf("a, b, c, d 의 값 ==> %d, %d, %d, %d \n", a, b, c, d);
//
//	a = 100;
//	a = a + 200;
//	printf("a의 값 ==> %d \n", a);
//}
//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d + %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; printf("%2d\n", number);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	printf("변수 두가지 입력 : ");
//	scanf("%d%d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d =1%%4\n", number1);
//	printf("%d =5%%3\n", number2);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("숫자를 입력하시오 :");
//	printf("%d%%50= %d\n", a, a%50);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d =6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d =6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d =6/4\n", data3);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d/%d\n", number1, number2);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}
#include <stdio.h>

int main()
{
	int jelly;
	int change;
	int change = 1000 - jelly;
	printf("젤리의 가격을 입력해주세요. (원)");
	scanf("%d", &jelly);
	printf("젤리를 사고 남은 돈은 %d개입니다", 1000-jelly);
	
	int jelly500 = jelly / 500;
	jelly = jelly % 500;
	int jelly100 = jelly / 100;
	jelly = jelly % 100;
	int jelly50 = jelly / 50;
	jelly = jelly % 50;
	int jelly10 = jelly / 10;
	jelly = jelly % 10;
	int jelly5 = jelly / 5;
	jelly = jelly % 5;
	int jelly1 = jelly / 1;
	printf("오백원짜리 동전은 %d개,", jelly500);
	printf("백원짜리 동전은 %d개,", jelly100);
	printf("오십원짜리 동전은 %d개,", jelly50);
	printf("십원짜리 동전은 %d개,", jelly10);



}