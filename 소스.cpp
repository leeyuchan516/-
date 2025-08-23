//#include <stdio.h>
//
//void main()
//{
//	int b = 100;
//	int* pB = &b;
//
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b = %d\n", *pB);
//	printf("b = %x\n", pB);
//}
//#include <stdio.h>
//
//void main() {
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
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
//void main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 포인터 간의 차는 %d입니다\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//}
#include <stdio.h>

void main()
{
	int* numptr;
	int num1 = 10;
	int num2 = 20;

	numptr = &num1;
	printf("%d\n", *numptr);

	numptr = &num2;
	printf("%d\n", *numptr);
		
}