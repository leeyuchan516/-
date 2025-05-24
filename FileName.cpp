//#include <stdio.h>
//int main()
//{
	//printf(" ");
	//printf(" ");
	//printf(" ");
	//printf("*");
	//printf("\n");
	//printf(" ");
	//printf(" ");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("\n");
	//printf(" ");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("\n");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("\n");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("\n");
	//printf(" ");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("\n");
	//printf(" ");
	//printf(" ");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("\n");
	//printf(" ");
	//printf(" ");
	//printf(" ");
	//printf("*");
	//printf("\n");

	//for (int a = 1; a <= 3; a++) {
	//	printf(" ");
	//}
	//for (int a = 1; a <= 1; a++) {
	//	printf("*");
	//}
	//printf("\n");
	//for (int a = 1; a <= 2; a++) {
	//	printf(" ");
	//}
	//for (int a = 1; a <= 3; a++) {
	//	printf("*");
	//}
	//printf("\n");
	//for (int a = 1; a <= 1; a++) {
	//	printf(" ");
	//}
	//for (int a = 1; a <= 5; a++) {
	//	printf("*");
	//}
	//printf("\n");
	//for (int a = 1; a <= 7; a++) {
	//	printf("*");
	//}
	//printf("\n");
	//for (int a = 1; a <= 7; a++) {
	//	printf("*");
	//}
	//printf("\n");
	//for (int a = 1; a <= 1; a++) {
	//	printf(" ");
	//}
	//for (int a = 1; a <= 5; a++) {
	//	printf("*");
	//}
	//printf("\n");
	//for (int a = 1; a <= 2; a++) {
	//	printf(" ");
	//}
	//for (int a = 1; a <= 3; a++) {
	//	printf("*");
	//}
	//printf("\n");
	//for (int a = 1; a <= 3; a++) {
	//	printf(" ");
	//}
	//for (int a = 1; a <= 1; a++) {
	//	printf("*");
	//}

	//int b = 3;
	//int c = 1;
	//for (int a = 1; a <= b; a++) {
	//	printf(" ");
	//}
	//b--;
	//for (int a = 1; a <= c; a++) {
	//	printf("*");
	//}
	//c += 2;
	//printf("\n");
	//for (int a = 1; a <= b; a++) {
	//	printf(" ");
	//}
	//b--;
	//for (int a = 1; a <= c; a++) {
	//	printf("*");
	//}
	//c += 2;
	//printf("\n");
	//for (int a = 1; a <= b; a++) {
	//	printf(" ");
	//}
	//b--;
	//for (int a = 1; a <= c; a++) {
	//	printf("*");
	//}
	//c += 2;
	//printf("\n");
	//for (int a = 1; a <= b; a++) {
	//	printf(" ");
	//}
	//for (int a = 1; a <= c; a++) {
	//	printf("*");
	//}
	//printf("\n");
	//for (int a = 1; a <= b; a++) {
	//	printf(" ");
	//}
	//b++;
	//for (int a = 1; a <= c; a++) {
	//	printf("*");
	//}
	//c -= 2;
	//printf("\n");
	//for (int a = 1; a <= b; a++) {
	//	printf(" ");
	//}
	//b++;
	//for (int a = 1; a <= c; a++) {
	//	printf("*");
	//}
	//c -= 2;
	//printf("\n");
	//for (int a = 1; a <= b; a++) {
	//	printf(" ");
	//}
	//b++;
	//for (int a = 1; a <= c; a++) {
	//	printf("*");
	//}
	//c -= 2;
	//printf("\n");
	//for (int a = 1; a <= b; a++) {
	//	printf(" ");
	//}
	//b++;
	//for (int a = 1; a <= c; a++) {
	//	printf("*");
	//}

//	int b = 3;
//	int c = 1;
//
//	for (;b>0;) {
//	for (int a = 1; a <= b; a++)
//	{
//		printf(" ");
//	}
//	b--;
//	for (int a = 1; a <= c; a++) {
//		printf("*");
//	}
//	c += 2;
//	printf("\n");
//	}
//	int e = 5;
//	int d = 0;
//	for (; e > 0;)
//	{
//		for (int a = 0; a <= d; a++)
//		{
//			printf(" ");
//		}
//		d++;
//		for (int a = 1; a <= e; a++)
//		{
//			printf("*");
//		}
//		e -= 2;
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int k;
//	scanf("%d", &k);
//
//	for (int y = 0; y <= 2 * k; y++)
//	{
//		for (int x = 0; x <= 2 * k; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
#include <stdio.h>
int main()
{
	int d;
	int n;
	int k;
	scanf("%d", &n);
	k = n - 1;

	for (int y = 0; y <= 2 * k; y++)
	{
		for (int x = 0; x <= 2 * k; x++)
		{
			if (-x + k == y|| x + k == y|| -x + 3*k == y || x - k == y)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}