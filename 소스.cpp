//#include <stdio.h>
//
//int main()
//{
//	int a;//���� ���� �ִ� ��//
//	int b;//�� ��//
//
//	printf("## ����� ��ȯ�� ���� ? ");
//	scanf("%d", &a);
//	printf("\n\n");
//
//	b = a / 50000;
//	printf("���� ��¥�� ==> %d �� \n", b);
//	a = a % 50000;
//
//	b = a / 10000;
//	printf("�� ��¥�� ==> %d �� \n", b);
//	a = a % 10000;
//
//	b = a / 5000;
//	printf("��õ ��¥�� ==> %d �� \n", b);
//	a = a % 5000;
//	
//	b = a / 1000;
//	printf("õ ��¥�� ==> %d �� \n", b);
//	a = a % 1000;
//
//	printf("����� �ٲ��� ���� �ܵ� ==> %d ��", a);
//}
//
//#define _CHR_SURE_NO_WARINGS
//#include <stdio.h>
//void main()
//{
//	int a, b, c, d;
//	int hap;
//
//	printf("1��° ���ڸ� �Է��Ͻÿ�: ");
//	scanf("%d", &a);
//	printf("2��° ���ڸ� �Է��Ͻÿ�: ");
//	scanf("%d", &b);
//	printf("3��° ���ڸ� �Է��Ͻÿ�: ");
//	scanf("%d", &c);
//	printf("4��° ���ڸ� �Է��Ͻÿ�: ");
//	scanf("%d", &d);
//	hap = a + b + c + d;
//	printf(" �հ� ==> %d \n", hap);
//}
//
//#define _CHR_SECURE_NO_WARINGS
//#include <stdio.h>
//void main()
//{
//	int aa[4];
//	int hap;
//
//	printf("1��° ���ڸ� �Է��Ͻÿ� : ");
//	scanf("%d", &aa[0]);
//	printf("2��° ���ڸ� �Է��Ͻÿ� : ");
//	scanf("%d", &aa[1]);
//	printf("3��° ���ڸ� �Է��Ͻÿ� : ");
//	scanf("%d", &aa[2]);
//	scanf("4��° ���ڸ� �Է��Ͻÿ� : ");
//	scanf("%d", &aa[3]);
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//	
//	printf(" �հ� ==> %d \n", hap);
//}
//
//#define _CHR_SECURE_WARINGS
//#include <stdio.h>
//void main()
//{
//	int aa[4];
//	int hap = 0;
//	int i;
//
//	for (i = 0; i <= 3; i++)
//	{
//		printf("%d��° ���ڸ� �Է��Ͻÿ� : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf("�հ� ==> %d \n", hap);
//}
//
#include <stdio.h>

void main()
{
	int aa[4] = { 100, 200, 300, 400 };
	int bb[] = { 100, 200, 300, 400 };
	int dcc[4] = { 100, 200 };
	int dd[4] = { 0 };
	int i;
	for (i = 0; i <= 3; i++)
		printf("bb[%d]==>%d\t", i, aa[i]);
	printf("\n");
}