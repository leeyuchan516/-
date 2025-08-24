//#include <stdio.h>
//
//int main()
//{
//	int number[2] = { 1, 2 };
//	void* p = number;
//	
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int fibonacci[5] = { 3, 5, 8, 13, 21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1);
//	printf(">> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d", ptrFibo[1]);
//	printf("%d", ptrFibo[0]);
//	printf("%d", ptrFibo[-1]);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	int* numptrA;
//	void* ptr;
//
//	numptrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numptrA-1));
//	printf("%d\n", *((int*)ptr+4));
//}
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 2, 4, 6, 8, 10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", *p++);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d", *p++);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int num[4] = { 1, 2, 3, 4 };
//	int* pt = num;
//
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//	pt--;
//	*pt++ += 20;
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", num[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
//#include <stdio.h>
//
//void main()
//{
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	char str[] = "기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a'; str[23] = 'b'; str[25] = 'c';
//	printf("%s\n\n", ptr);
//}
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
//		printf("%d ", *(p--));
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int str[101];
//	int* p;
//	for (int i = 1; i <= 100; i++)
//	{
//		str[i] = i;
//	}
//
//	p = &str[50];
//
//	for (int i = *(p-1); i <= 100; i++)
//	{
//		printf("%d", i);
//	}
//	for (int i = 1; i < *p; i++)
//	{
//		printf("%d", i);
//	}
//}