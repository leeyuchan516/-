//#define _CHR_SEURE_NO_WARINGS
//#include <stdio.h>
//#include <string.h>
//void main()
//{
//	struct bibm {
//		int a;
//		float b;
//		char c;
//		char d[5];
//	};
//
//	struct bibm b1;
//
//	b1.a = 10;
//	b1.b = 1.1f;
//	b1.c = 'A';
//	strcpy(b1.d, "ABCD");
//
//	printf("b1.a ==> %d \n", b1.a);
//	printf("b1.b ==> %f \n", b1.b);
//	printf("b1.c ==> %c \n", b1.c);
//	printf("b1.d ==> %s \n", b1.d);
//}
//
//#define _CHR_SECURE_WERINGS
//#include <stdio.h>
//void main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//	
//	struct student s;
//
//	printf("이름 :");
//	scanf("%s", s.name, 9);
//
//	printf("국어 점수 :");
//	scanf("%d", &s.kor);
//
//	printf("영어 점수 :");
//	scanf("%d", &s.eng);
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("\n------ 구조체 활용 ------\n");
//	printf("학생 이름 ==> %s\n", s.name);
//	printf("국어 점수 ==> %d\n", s.kor);
//	printf("영어 점수 ==> %d\n", s.eng);
//	printf("평균 점수 ==> %5.1f\n", s.avg);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	enum week {sun, mon, tue, wed, thu, fri, sat};
//
//	enum week ww;
//
//	ww = sat;
//
//	if (ww == sun)
//		printf("오늘은 일요일입니다.\n");
//	else
//		printf("오늘은 일요일이 아닙니다.\n");
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[5];
//	for (int k = 0; k < 5; k++)
//	{
//		scanf("%d", &arr[k]);
//	}
//	printf("\n\n");
//	for (int k = 0; k < 5; k++) {
//		printf("%d", arr[k]);
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int number[10];
//	int same;
//	for (int k = 0; k < 10; k++)
//	{
//		scanf("%d", &number[k]);
//	}
//
//	printf("\n");
//
//	int flag = 1;
//	for (; flag;)
//	{
//		scanf("%d", &same);
//		int k;
//		for (k = 0; k < 10; k++)
//		{
//			if (number[k] == same)
//			{
//				printf("exist");
//				flag = 0;
//				break;
//			}
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int num[4] = { 4 ,3 ,1 ,2 };
//	int swap;
//	swap = num[2];
//	num[2] = num[3];
//	num[3] = swap;
//
//	swap = num[0];
//	num[0] = num[3];
//	num[3] = swap;
//
//	swap = num[1];
//	num[1] = num[2];
//	num[2] = swap;
//	for (int k = 0; k < 4; k++)
//	{
//		printf("%d ", num[k]);
//	}
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int num[4];
//	int small;
//	for (int a = 0; a < 4; a++)
//	{
//		scanf(" %d", &num[a]);
//	}
//	int change;
//	for (int k = 0; k < 4; k++)
//	{	
//		small = k;
//		for(int i = k+1; i < 4; i++)
//		{
//			if (num[small] > num[i])
//			{
//				small = i;
//			}
//		}
//			change = num[k];
//			num[k] = num[small];
//			num[small] = change;
//	}
//	for (int k = 0; k < 4; k++)
//	{
//		printf("%d", num[k]);
//	}
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) max = one;
//	else max = two;
//	printf("max = %d \n", max);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//	if (one > two) {
//		if(one >three)
//		max = one;
//	else max = three;
//	}
//	else {
//		if (two > three) max = two;
//		else max = three;
//	}
//	printf("max = %d \n", max);
//}
//#include <stdio.h>
//
//void main()
//{
//	int a[3] = { 1, 3, 2 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++) {
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("max = %d\n", max);
//}
//#include <stdio.h>
//
//void main()
//{
//	int a[5] = { 1, 3, 6, 4, 2 };
//	int max = a[0];
//	int min = a[0];
//	int sum = a[0];
//	float average;
//	for (int i = 1; i < 5; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//
//		if (min > a[i])
//			min = a[i];
//		sum = a[i] + sum;
//	}
//	average = sum / (float)5;
//	printf("최솟값 = %d\n최대값은 = %d \n원소를 총합 = %d \n평균 = %.5f", max, min, sum, average);
//}
//
#include <stdio.h>

int main()
{
	int a[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };
	int dice[6] = { 0, 0, 0, 0, 0 ,0 };
	for (int k = 0; k < 10; k++)
	{
		for (int b = 1; b < 7; b++)
		{
			if (b == a[k])
			{
				dice[b] = dice[b] + 1;
			}
		}
		
	}
}

/*
1은 3개
2는 1개
3은 2개
4는 2개
5는 1개
6는 1개
*/