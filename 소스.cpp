//#include <stdio.h>
//
//int main()
//{
//	int a[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };	
//	int dice[7] = { };
//
//	for (int k = 0; k < 10; k++)//10
//	{
//		dice[a[k]]++;
//	}
//	for (int k = 1; k <= 6; k++)
//	{
//		printf("주사위 %d가 나온 횟수는 %d\n", k, dice[k]);
//	}
//}
//66
//16
//#include <stdio.h>
//
//int main()
//{
//	char arr[2][3] = { '1', '2', '3', '4', '5', '6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { {'1', '2', '3'},{'4', '5', '6'} };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	int arr2d[5][4] =
//	{ {662, 7, 4, 74}, {8, 396, 299, 95}, {66, 73, 86, 0}, {84, 7, 41, 11}, };
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%3d", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a[3][3] = { {2, 4, 6}, {8, 10, 12}, {14, 16, 18} };
//
//	for (int k = 0; k <= 2; k++)
//	{
//		for (int d = 0; d <= 2; d++)
//		{
//			printf("%5d", a[d][k]);
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//
//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//			data[i][j] = i + j ;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++){
//			printf( "%3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//
//void main()
//{
//	const int N = 5;
//	long data[N][N];
//	int num = 1;
//	for (int k = 0; k < N; k++)
//	{
//		for (int c = 0; c < N; c++)
//			data[k][c] = num++;
//	}
//	
//	for (int k = 0; k < N; k++)
//	{
//		for (int c = 0; c <N; c++)
//		{
//			printf("%3d", data[k][c]);
//		}
//		printf("\n");
//	}
//}
//
//
//#include <stdio.h>
//
//void main()
//{
//	const int N = 5;
//	long data[N][N];
//	int num = 1;
//	for (int k = 0; k < N; k++)
//	{
//		for (int c = 0; c < N; c++)
//			data[k][c] = num++;
//	}
//
//	for (int k = N-1; k >= 0; k--)
//	{
//		for (int c = N-1; c >= 0; c--)
//		{
//			printf("%3d", data[k][c]);
//		}
//		printf("\n");
//	}
//}
//
//#include <stdio.h>
//
//void main()
//{
//	const int N = 5;
//	long data1[N*N];
//	long data[N][N];
//	int num = 1;
//	int num1 = 0;
//	for (int k = 0; k < N; k++)
//	{
//		for (int c = 0; c < N; c++)
//		{
//			data[k][c] = num++;
//
//		}
//	}
//	for (int k = 0; k < N; k++)
//	{
//		for (int c = 0; c < N; c++)
//		{
//			data1[num1] = data[k][c];
//			num1++;
//		}
//	}
//	for (int k = 0; k < N*N; k++)
//	{
//		printf("%d\n", data1[k]);
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[10] = {};
//	char b[10][10] = {};
//	for (int k = 0; k < n; k++)
//	{
//		scanf("%d", &a[k]);
//	}
//	for (int c = 0; c <= n; c++)
//	{
//		for (int d = 0; d < a[c]; d++)
//		{
//			b[d][c] = '*';
//		}
//	}
//	for (int c = 0; c < 10; c++)
//	{
//		for (int d = 0; d < 10; d++)
//		{
//			if(b[c][d] == 0)printf(" ");
//			printf("%c", b[c][d]);
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>

int main()
{
	int N = 5;
	long data[5][5];
	int num = 1;
	for (int k = 0; k < 5; k++)
	{
		data[0][k] = num++;
	}
	for (int k = 0; k < 5; k++)
	{

	}
}