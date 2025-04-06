#include <stdio.h>

int main()
{
	int a;//현재 남아 있는 돈//
	int b;//몇 장//

	printf("## 지폐로 교환할 돈은 ? ");
	scanf("%d", &a);
	printf("\n\n");

	b = a / 50000;
	printf("오만 원짜리 ==> %d 장 \n", b);
	a = a % 50000;

	b = a / 10000;
	printf("만 원짜리 ==> %d 장 \n", b);
	a = a % 10000;

	b = a / 5000;
	printf("오천 원짜리 ==> %d 장 \n", b);
	a = a % 5000;
	
	b = a / 1000;
	printf("천 원짜리 ==> %d 장 \n", b);
	a = a % 1000;

	printf("지폐로 바꾸지 못한 잔돈 ==> %d 원", a);
}