//#include <stdio.h>
//int main()
//{
//	printf("��� 1��\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("��� %d��\n", apple);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("Ű���� 3��\n");
//	printf("���콺 2��\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int keyborad = 3;
//	int mouse = 2;
//	printf("Ű���� : %d��\n", keyborad);
//		printf("���콺 : %d��\n", mouse);
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
//	//������ * ������ * ����
//	printf("���� ���� : %.2lf\n", area_of_a_circle);
//
//	double circumference_of_a_circle;
//	circumference_of_a_circle = (circle + circle) * pi;
//	printf("���� �ѷ� : %.2lf\n", circumference_of_a_circle);
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
//	printf("��ٸ����� ���� : %d\n", area_of_trapezoid);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("���ϴ� ���ڸ� �Է� : ");
//	scanf("%d", &k);
//	printf("�Է��� ���ڴ� : %d\n", k);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("���ϰ� ���� �� 2�� �Է� : ");
//	scanf("%d %d", &y, &x);
//	printf("�� ���� ���� %d�Դϴ�.\n", y + x);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("���� �� �� �Է� : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("������� : %c%c%c\n", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int r;
//	double pi;
//	pi = 3.14;
//	printf("�������� ���� : ");
//	scanf("%d", &r);
//	double area_of_a_circle;
//	area_of_a_circle = r * r * pi;
//	printf("���� ���̴� %.2lf�Դϴ�.\n", area_of_a_circle);
//	double length_of_circle;
//	length_of_circle = (r + r) * pi;
//	printf("���� �ѷ��� %.2lf�Դϴ�.\n", length_of_circle);
//	return 0;
//}
#include <stdio.h>
int main()
{
	double W1, W2, H;
	printf("�غ��� ����, ������ ����, ���� �Է� : ");
	scanf("%lf %lf %lf", &W1, &W2, &H);
	double area_of_a_trapezoid;
	area_of_a_trapezoid = (W1 + W2) * H / 2;
	printf("��ٸ����� ���̴� %lf�Դϴ�.\n", area_of_a_trapezoid);
	return 0;
}