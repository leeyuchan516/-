//#include <stdio.h>
//
//int main()
//{
//	int a;//현재 남아 있는 돈//
//	int b;//몇 장//
//
//	printf("## 지폐로 교환할 돈은 ? ");
//	scanf("%d", &a);
//	printf("\n\n");
//
//	b = a / 50000;
//	printf("오만 원짜리 ==> %d 장 \n", b);
//	a = a % 50000;
//
//	b = a / 10000;
//	printf("만 원짜리 ==> %d 장 \n", b);
//	a = a % 10000;
//
//	b = a / 5000;
//	printf("오천 원짜리 ==> %d 장 \n", b);
//	a = a % 5000;
//	
//	b = a / 1000;
//	printf("천 원짜리 ==> %d 장 \n", b);
//	a = a % 1000;
//
//	printf("지폐로 바꾸지 못한 잔돈 ==> %d 원", a);
//}
//
//#define _CHR_SURE_NO_WARINGS
//#include <stdio.h>
//void main()
//{
//	int a, b, c, d;
//	int hap;
//
//	printf("1번째 숫자를 입력하시오: ");
//	scanf("%d", &a);
//	printf("2번째 숫자를 입력하시요: ");
//	scanf("%d", &b);
//	printf("3번째 숫자를 입력하시오: ");
//	scanf("%d", &c);
//	printf("4번째 숫자를 입력하시오: ");
//	scanf("%d", &d);
//	hap = a + b + c + d;
//	printf(" 합계 ==> %d \n", hap);
//}
//
//#define _CHR_SECURE_NO_WARINGS
//#include <stdio.h>
//void main()
//{
//	int aa[4];
//	int hap;
//
//	printf("1번째 숫자를 입력하시오 : ");
//	scanf("%d", &aa[0]);
//	printf("2번째 숫자를 입력하시오 : ");
//	scanf("%d", &aa[1]);
//	printf("3번째 숫자를 입력하시오 : ");
//	scanf("%d", &aa[2]);
//	scanf("4번째 숫자를 입력하시오 : ");
//	scanf("%d", &aa[3]);
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//	
//	printf(" 합게 ==> %d \n", hap);
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
//		printf("%d번째 숫자를 입력하시오 : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf("합계 ==> %d \n", hap);
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