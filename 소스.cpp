//#include <stdio.h>
//int main()
//{
//	char a[6][16] = {};
//	char b;
//
//	for (int k = 1; k <= 5; k++)
//	{
//		for (int i = 1; i <= 16; i++)
//		{
//			scanf("%c", &b);
//			if (b == '\n')
//				break;
//			a[k][i] = b;
//		}
//	}
//
//	for (int i = 1; i <= 15; i++)
//	{
//		for (int k = 1; k <= 5; k++)
//		{
//			if (a[k][i] != 0)
//			{
//				printf("%c", a[k][i]);
//			}
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	int s[101][101] = {};
//	int x;
//	int y;
//	int input2;
//	int sum = 0;
//
//	scanf("%d", &input);
//
//
//	for (int k = 1; k <= input; k++)
//	{
//	 	scanf("%d", &x);
//		scanf("%d", &y);
//
//		for (int i = 1; i <= 10; i++)
//		{
//			for (int a = 1; a <= 10; a++)
//			{
//				s[x + a][y + i] = 1;
//			}
//		}
//	}
//
//	for (int k = 1; k <= 100; k++)
//	{
//		for (int i = 1; i <= 100; i++)
//		{
//			if (s[k][i] == 1)
//			{
//				sum++;
//			}
//		}
//	}
//
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int A[11];
//	int sum[42] = {};
//	int sum1 = 0;
//
//	for (int k = 1; k <= 10; k++)
//	{
//		scanf("%d", &A[k]);
//	}
//
//	for (int k = 1; k <= 10; k++)
//	{
//		for (int i = 0; i <= 41; i++)
//		{
//			if (A[k] % 42 == i)
//			{
//				sum[i] = 1;
//			}
//		}
//	}
//	for (int k = 0; k <= 41; k++)
//	{
//		if (sum[k] == 1)
//		{
//			sum1++;
//		}
//	}
//	printf("%d", sum1);
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "memmove can be very useful.......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct mydata
//{
//	int a;
//	char b[25];
//};
//void main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d - %s\n", data.a, data.b);
//}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* str1 = (char*)"coding";
//	char* str2 = (char*)"coding";
//	char* str3 = (char*)"coding.ne.kr";
//	char* str4 = (char*)"ne.kr";
//	char* str5 = (char*)"abcd";
//
//	printf("%s with %s = %d\n", str1, str2, memcmp(str1, str2, strlen(str1)));
//	printf("%s with %s(str1 size) = %d\n", str1, str3, memcmp(str1, str2, strlen(str1)));
//	printf("%s with %s(str2 size) = %d\n", str1, str3, memcmp(str1, str4, strlen(str1)));
//
//	printf("%s with %s = %d\n", str1, str4, memcmp(str1, str4, strlen(str1)));
//	printf("%s with %s (str1 size) = %d\n", str1, str5, memcmp(str1, str5, strlen(str1)));
//	printf("%s with %s (str5 size) = %d\n", str1, str5, memcmp(str1, str5, strlen(str1)));
//	printf("%s with %s (str5 size) = %d\n", str1, str5, memcmp(str1, str5, strlen(str5)));
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int src_data[10] = { 0, 1, 2, 3, 4, 5 };
//	int dst_data[10] = { 10, 20, 30, 40, 50 };
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	printf("%d %d %d %d %d\n", src_data[0], src_data[1], src_data[2], src_data[3], src_data[4]);
//	printf("%d %d %d %d %d\n", dst_data[0], dst_data[1], dst_data[2], dst_data[3], dst_data[4]);
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[20] = "coding";
//
//	strcat(str, ".ne.kr");
//	printf("%s\n", str);
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[10];
//
//	scanf("%s", str);
//	printf("입력한 문자열 : %s\n", str);
//	printf("문자열의 길이 : %d\n", strlen(str));
//}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' charactor in \"%s\"... \n", str);
//	pch = strchr(str, 's');
//	
//	while (pch != NULL)
//	{
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//	return 0;
//}