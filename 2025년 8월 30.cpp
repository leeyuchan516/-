//#include <stdio.h>
//
//void main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	for (int i = 100; i >= 1; i--)
//	{
//		printf("%d\n", i);
//	}
//}
//#include <stdio.h>
//
//void main()
//{
//	int str[101];
//	for (int i = 1; i <= 100; i++)
//	{
//		str[i] = i;
//	}
//	for (int i = 100; i >= 1; i--)
//	{
//		printf("%d ", str[i]);
//	}
//}
//#include <stdio.h>
//
//void main()
//{
//	int str[101];
//	int* p;
//	for (int i = 1; i <= 100; i++)
//	{
//		str[i] = i;
//	}
//
//	p = &str[100];
//
//	for (int i = 100; i >= 1; i--)
//	{
//		printf("%d ", *p);
//		p--;
//	}
//}

//#include <stdio.h>
//
//void main()
//{
//	int str[101];
//	int* p;
//	for (int i = 1; i <= 100; i++)
//	{
//		str[i] = i;
//	}
//
//	p = &str[51];
//
//	for (; *p != 50;)
//	{
//		printf("%d ", *p);
//		if (*p == 100)
//		{
//			p -= 100;
//		}
//		++p;
//	}

	//int i = 51;
	//for (;i != 50;)
	//{
	//	printf("%d ", i);
	//	
	//	if (i == 100)
	//	{
	//		i -= 100;
	//	}
	//	++i;
	//}
//}

//#include <stdio.h>
//
//void main()
//{
//	int arr[5];
//	int* p;
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("\n");
//
//	p = arr;
//
//	p += 2;
//
//	printf("%d", *p);
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[101];
//	int a;
//	int b;
//	int sum = 0;
//	scanf("%d", &a);
//
//	for (int k = 1; k <= a; k++)
//	{
//		scanf("%d", &arr[k]);
//	}
//
//	scanf("%d", &b);
//
//	for (int k = 1; k <= a; k++)
//	{
//		if (arr[k] == b)
//		{
//			sum += 1;
//		}
//	}
//	printf("%d", sum);
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	int arr[10001];
//
//	scanf("%d %d", &a, &b);
//
//	for (int k = 1; k <= a; k++)
//	{
//		scanf("%d", &arr[k]);
//	}
//
//
//	for (int k = 1; k <= a; k++)
//	{
//		if (arr[k] < b)
//		{
//			printf("%d ", arr[k]);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int N;
//	int arr[1000001];
//
//	scanf("%d", &N);
//
//	for (int k = 1; k <= N; k++)
//	{
//		scanf("%d", &arr[k]);
//	}
//
//	int max = arr[1];
//	int min = arr[1];
//
//	for (int k = 2; k <= N; k++)
//	{
//		if (max < arr[k])
//			max = arr[k];
//		if (min > arr[k])
//			min = arr[k];
//	}
//
//	printf("%d %d", min, max);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[10];
//
//	for (int k = 1; k <= 9; k++)
//	{
//		scanf("%d", &arr[k]);
//	}
//	int max = arr[1];
//	int order = 1;
//
//;	for (int k = 2; k <= 9; k++)
//	{
//		if (max < arr[k])
//		{
//			max = arr[k];
//			order = k;
//		}
//	}
//	printf("%d\n", max);
//	printf("%d\n", order);
//}

//#include <stdio.h>
//
//int main()
//{
//	int s[31] = {};
//	int s1[31] = {};
//	for (int k = 1; k <= 28; k++)
//	{
//		scanf("%d", &s[k]);
//		s1[s[k]] = 1;
//	}
//
//	for (int k = 1; k <= 30; k++)
//	{
//		if (s1[k] == 0)
//		{
//			printf("%d\n", k);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int c;
//	int N[101] = {};
//	int i, j, k;
//	int M;
//
//	scanf("%d %d", &c, &M);
//	for (int a = 1; a <= M; a++)
//	{
//		scanf("%d %d %d", &i, &j, &k);
//		for (; i <= j; i++)
//		{
//			N[i] = 0;
//			N[i] = k;
//		}
//	}
//	for (int a = 1; a <= c; a++)
//	{
//		printf("%d ", N[a]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, M, i, j, c;
//	int N[101];
//	scanf("%d %d", &a, &M);
//
//	for (int k = 1; k <= a; k++)
//	{
//		N[k] = k;
//	}
//
//	for (int k = 1; k <= M; k++)
//	{
//		scanf("%d %d", &i, &j);
//		c = N[i];
//		N[i] = N[j];
//		N[j] = c;
//	}
//	for (int k = 1; k <= a; k++)
//	{
//		printf("%d ", N[k]);
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int l[11];
	int r[11];
	int sum = 10;
	for (int k = 1; k <= 10; k++)
	{
		scanf("%d", &l[k]);
		r[k] = l[k] % 42;
	}
	

}