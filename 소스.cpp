//#include <stdio.h>
//
//void main()
//{
//	int aa[3][4];
//
//	aa[0][0] = 1; aa[0][1] = 2; aa[0][2] = 3; aa[0][3] = 4;
//	aa[1][0] = 5; aa[1][1] = 6; aa[1][2] = 7; aa[1][3] = 8;
//	aa[2][0] = 9; aa[2][1] = 10; aa[2][2] = 11; aa[2][3] = 12;
//
//	printf("aa[0][0]부터 aa[2][3]까지 출력\n");
//
//	printf("%3d %3d %3d %3d\n", aa[0][0], aa[0][1], aa[0][2], aa[0][3]);
//	printf("%3d %3d %3d %3d\n", aa[1][0], aa[1][1], aa[1][2]);
//	printf("%3d %3d %3d %3d\n", aa[2][0], aa[2][1], aa[2][2]);
//}
//#include <stdio.h>
//
//void main()
//{
//	int aa[3][4];
//	int i, k;
//
//	int val = 1;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			aa[i][k] = val;
//			val++;
//		}
//	}
//
//	printf("aa[0][0]부터 aa[2][3]까지 출력 \n");
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			printf("%3d", aa[i][k]);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//
//void main()
//{
//	int gugu[9][9];
//	int i, k;
//
//	for (i = 0; i < 9; i++)
//		for (k = 0; k < 9; k++)
//			gugu[i][k] = (i + 1) * (k + 1);
//
//	for (i = 0; i < 9; i++)
//	{
//		for (k = 0; k < 9; k++)
//		{
//			printf("%d*%d=%2d ", k + 1, i + 1, gugu[i][k]);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//
//void main()
//{
//	const int N = 10;
//	long data[N][N] = {};
//	int v = 1;
//	int y = 0;
//	int x = -1;
//	int v1 = N;
//	int v2 = 1;
//	for(;;)
//	{
//		for (int k = 0; k < v1; k++)
//		{
//			x += v2;
//			data[y][x] = v;
//			v++;
//		}
//		v1--;
//		if (v1 == 0)
//		{
//			break;
//		}
//		for (int k = 0; k < v1; k++)
//		{
//			y += v2;
//			data[y][x] = v;
//			v++;
//
//		}
//		v2 = -v2;
//		
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int k = 0; k < N; k++)
//		{
//			printf("%3d ", data[i][k]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//void main()
//{
//	int b = 100;
//	int *pB = &b;
//
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b = %d\n", *pB);
//	printf("b = %x\n", pB);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	char a = 'A';
//	char *pA = &a;
//
//	int b = 100;
//	int *pB = &b;
//
//	double c = 3.14;
//	double *pC = &c;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//
//	printf("*pA의 크기 : %d byte\n", sizeof(*pA));
//	printf("*pB의 크기 : %d byte\n", sizeof(*pB));
//	printf("*pC의 크기 : %d byte\n", sizeof(*pC));
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("Hello World!");
//}

//#include <stdio.h>
//
//int main()
//{
//	int A;
//	int B;
//	scanf("%d", &A);
//	scanf("%d", &B);
//	printf("%d", A + B);
//}

//#include <stdio.h>
//
//int main()
//{
//	int A;
//	int B;
//	scanf("%d", &A);
//	scanf("%d", &B);
//	printf("%d", A - B);
//}

//#include <stdio.h>
//
//int main()
//{
//	int A;
//	int B;
//	scanf("%d", &A);
//	scanf("%d", &B);
//	printf("%d", A * B);
//}

//#include <stdio.h>
//
//int main()
//{
//	double A;
//	double B;
//	scanf("%lf", &A);
//	scanf("%lf", &B);
//	printf("%0.16lf", A / B);
//}

//#include <stdio.h>
//
//int main()
//{
//	int A;
//	int B;
//	scanf("%d", &A);
//	scanf("%d", &B);
//	printf("%d\n", A + B);
//	printf("%d\n", A - B);
//	printf("%d\n", A * B);
//	printf("%d\n", A / B);
//	printf("%d", A % B);
//}

//#include <stdio.h>
//
//int main()
//{
//	int year;
//
//	scanf("%d", &year);
//	printf("%d", year - 543);
//}

//#include <stdio.h>
//
//int main()
//{
//	int A, B, C;
//	scanf("%d %d %d", &A, &B, &C);
//	printf("%d\n", (A + B) % C);
//	printf("%d\n", ((A % C) + (B % C)) % C);
//	printf("%d\n", (A*B) % C);
//	printf("%d", ((A % C) * (B % C)) % C);
//}

//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//
//	scanf("%d %d", &a, &b);
//	printf("%d\n" , a * (b%10));
//	printf("%d\n", a * ( (b / 10) - (b / 100 * 10)));
//	printf("%d\n", a * (b / 100));
//	printf("%d", a * b);
//}

//#include <stdio.h>
//
//int main()
//{
//	long long int A, B, C;
//	scanf("%lld", &A);
//	scanf("%lld", &B);
//	scanf("%lld", &C);
//	printf("%lld", A + B + C);
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("\\    /\\\n");
//	printf(" )  ( ')\n");
//	printf("(  /  )\n");
//	printf(" \\(__)|\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("|\\_/|\n");
//	printf("|q p|   /}\n");
//	printf("( 0 )\"\"\"\\\n");
//	printf("|\"^\"`    |\n");
//	printf("||_/=\\\\__|");
//}
//#include <stdio.h>
//
//int main()
//{
//	int A;
//	int B;
//	scanf("%d %d", &A, &B);
//	if (A > B)
//	{
//		printf(">");
//	}
//	if (A < B)
//	{
//		printf("<");
//	}
//	if (A == B)
//	{
//		printf("==");
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int A;
//	scanf("%d", &A);
//
//	if (90 <= A)
//		printf("A");
//	else if (80 <= A)
//		printf("B");
//	else if (70 <= A)
//		printf("C");
//	else if (60 <= A)
//		printf("D");
//	else
//		printf("F");
//}
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		printf("1");
//	else
//		printf("0");
//}
#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	if (x > 0)
	{
		if (y > 0)
			printf("1");
		if (y < 0)
			printf("4");
	}
	if (x < 0)
	{
		if(y>)
	}
}