//#include <stdio.h>
//void main()
//{
//	int i, k;
//
//	for (i = 1, k = 2; i <= 9; i++, k++)
//		printf("%d * %d = %d\n", i, k, i * k);
//}
//#include <stdio.h>
//void main()
//{
//	int i;
//	i = 0;
//	for (;;)
//	{
//		printf("%d \n", i);
//		i++;
//	}
//}
//#define _CHR_SURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	for (;;)
//	{
//		printf("���� �� �� �Է� (���߷��� Ctrl+C) :");
//		scanf("%d %d", &a, &b);
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//}
//#include <stdio.h>
//void main()
//{
//	int i;
//
//	for (i = 0; i < 128; i++)
//	{
//		if (i % 16 == 0)
//		{
//			printf("------------------\n");
//			printf("10���� 16���� ����\n");
//			printf("------------------\n");
//		}
//		printf("%5d %5x %5c\n", i, i, i);
//	}
//}
//#include <stdio.h>
//void main()
//{
//	int a;
//	int b;
//
//	for (a = 9; a >= 1; a--) 
//	{
//		for (b = 9; b >= 2; b--)
//		{
//			printf("%d * %d = %2d   ", b, a, a * b);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//void main()
//{
//	int i;
//	int a = 0;
//	int b = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			a = a + i;
//		else
//			b = b + i;
//	}
//
//	printf("%d", a);
//	printf("%d", b);
//}
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int str_cnt;
	int i;

	printf("������ �� ���ڸ� �Է� (100�� ����) : ");
	scanf("%s", str);

	printf("\n");
	printf("�Է��� ���ڿ� ==> %s\n", str);
	printf("���ѵ� ���ڿ� ==>");

	str_cnt = strlen(str);
	/*printf("%c", str[0]);*/

	for (str_cnt; str_cnt >= 0; str_cnt--)
	{
		if (str[str_cnt]>='0' && str[str_cnt]<='9')
		{
			printf("#");
		}
		else
		printf("%c", str[str_cnt]);
	}
}