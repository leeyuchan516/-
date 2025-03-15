//#include <stdio.h>
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int keyborad = 3;
//	int mouse = 2;
//	printf("키보드 : %d개\n", keyborad);
//		printf("마우스 : %d개\n", mouse);
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int circle = 5;
//	double pi;
//	pi = 3.14;
//	double area_of_a_circle;
//	area_of_a_circle = circle * circle * pi;
//	//반지름 * 반지름 * 파이
//	printf("원의 넓이 : %.2lf\n", area_of_a_circle);
//
//	double circumference_of_a_circle;
//	circumference_of_a_circle = (circle + circle) * pi;
//	printf("원의 둘래 : %.2lf\n", circumference_of_a_circle);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int base = 3;
//	int top = 5;
//	int height = 7;
//	int area_of_trapezoid;
//	area_of_trapezoid = (base + top) * height / 2;
//	printf("사다리꼴의 넓이 : %d\n", area_of_trapezoid);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int r;
//	double pi;
//	pi = 3.14;
//	printf("반지름의 길이 : ");
//	scanf("%d", &r);
//	double area_of_a_circle;
//	area_of_a_circle = r * r * pi;
//	printf("원의 넓이는 %.2lf입니다.\n", area_of_a_circle);
//	double length_of_circle;
//	length_of_circle = (r + r) * pi;
//	printf("원의 둘레는 %.2lf입니다.\n", length_of_circle);
//	return 0;
//}
#include <stdio.h>
int main()
{
	double W1, W2, H;
	printf("밑변의 길이, 윗변의 길이, 높이 입력 : ");
	scanf("%lf %lf %lf", &W1, &W2, &H);
	double area_of_a_trapezoid;
	area_of_a_trapezoid = (W1 + W2) * H / 2;
	printf("사다리꼴의 넓이는 %lf입니다.\n", area_of_a_trapezoid);
	return 0;
}