//#include <stdio.h>
//
//int main()
//{
//	int ary[4];
//	int hap = 0;
//	int i;
//	for (i = 0; i <= 3; i++) {
//		printf("%d번쨰 숫자를 입력하세요 : ", i + 1);
//		scanf("%d", &ary[i]);
//	}
//	for (i = 3; i > 0; i--)
//		hap += ary[i];
//	printf("%d", hap);
//}

//#include <stdio.h>
//
//int main()
//{
//	int ary[2][3];
//	int i, k;
//	int num = 10;
//	for (i = 0; i < 2; i++)
//		for (k = 0; k < 3; k++)
//			ary[i][k] = --num;
//
//	for (i = 0; i < 2; i++) {
//		for (k = 0; k < 3; k++) {
//			printf("%3d", ary[i][k]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a > 0)
//	{
//		if (b > 0)
//		{
//			printf("1");
//		}
//		if (b < 0)
//		{
//			printf("4");
//		}
//	}
//	if (a < 0)
//	{
//		if (b > 0)
//		{
//			printf("2");
//		}
//		if (b < 0)
//		{
//			printf("3");
//		}
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int H , M;
//	scanf("%d %d", &H, &M);
//
//	M += 15;
//	H -= 1;
//
//	H += M / 60;
//	M %= 60;
//
//	H += 24;
//	H %= 24;
//
//
//	/*if (M < 45)
//	{
//		M = M + 15;
//		if (H == 0)
//		{
//			H = 24;
//		}
//		H = H - 1;
//	}
//	else if (M >= 45)
//	{
//		M = M - 45;
//	}*/
//
//	printf("%d %d", H, M);
//}

//#include <stdio.h>
//
//int main()
//{
//	int H, M, Cooking_time;
//	scanf("%d %d", &H, &M);
//	scanf("%d", &Cooking_time);
//
//	M += Cooking_time;
//	H += M / 60;
//	M %= 60;
//	H += 24;
//	H %= 24;
//
//
//	printf("%d %d", H, M);
//}

//#include <stdio.h>
//
//int main()
//{
//	int dice1, dice2, dice3;
//
//	scanf("%d %d %d", &dice1, &dice2, &dice3);
//
//	if (dice1 == dice2 && dice1 == dice3)
//	{
//		printf("%d", 10000 + (dice1 * 1000));
//	}
//	else if (dice1 == dice2)
//	{
//		printf("%d", 1000 + dice1 * 100);
//	}
//	else if (dice1 == dice3)
//	{
//		printf("%d", 1000 + dice1 * 100);
//	}
//	else if (dice2 == dice3)
//	{
//		printf("%d", 1000 + dice2 * 100);
//	}
//	else
//	{
//		if (dice1 > dice2)
//		{
//			if (dice1 > dice3)
//			{
//				printf("%d", dice1 * 100);
//			}
//			else
//			{
//				printf("%d", dice3 * 100);
//			}
//		}
//		else
//		{
//			if (dice2 > dice3)
//			{
//				printf("%d", dice2 * 100);
//			}
//			else
//			{
//				printf("%d", dice3 * 100);
//			}
//		}
//	}
//	return 0;
//}


//	if (dice1 == dice2)
//	{
//		if (dice1 == dice3)
//		{
//			printf("%d", 10000 + (dice1 * 1000));
//		}
//		if (dice1 != dice3)
//		{
//			printf("%d", 1000 + dice1 * 100);
//		}
//	}
//	else if(dice1 != dice2)
//	{
//		if (dice1 != dice3)
//		{
//			if (dice1 > dice2)
//			{
//				if (dice1 > dice3)
//				{
//					printf("%d", dice1 * 100);
//				}
//				if (dice1 < dice2)
//				{
//					printf("%d", dice2 * 100);
//				}
//			}
//			if (dice1 < dice2)
//			{
//				if (dice2 > dice3)
//				{
//					printf("%d", dice2 * 100);
//				}
//				if (dice2 < dice3)
//				{
//					printf("%d", dice3 * 100);
//				}
//			}
//		}
//		if (dice1 == dice3)
//		{
//			printf("%d", 1000 + dice1 * 100);
//		}
//		if (dice2 == dice3)
//		{
//			printf("%d", 1000 + dice2 * 100);
//		}
//	}


//#include <stdio.h>
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int k=1; k<=9; k++)
//	{
//		printf("%d * %d = %d\n", N, k, N * k);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int A;
//	int B;
//	int T;
//	scanf("%d", &T);
//	for (;T>0;T--)
//	{
//		scanf("%d %d", &A, &B);
//		printf("%d\n", A + B);
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int k = 0; k <= n; k++)
//	{
//		sum += k;
//	}
//	printf("%d", sum);
//}

//#include <stdio.h>
//
//int main()
//{
//	int X, N, a, b;
//	int sum = 0;
//	scanf("%d", &X);
//	scanf("%d", &N);
//	for (;N>0;N--)
//	{
//		scanf("%d %d", &a, &b);
//		sum += a * b;
//	}
//	if (X == sum)
//		printf("Yes");
//	else
//		printf("No");
//}