//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//
//	pch = strstr(str, "simple");
//	strncpy(pch, "simple", 6);
//
//	printf("%s\n", str);
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* str1 = "LPUX";
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARIS";
//
//	printf("s1[%-7s], s2[%-7s] => ret = [%2d]\n", str1, str2, strcmp(str1, str2));
//	printf("s2[%-7s], s3[%-7s] => ret = [%2d]\n", str2, str3, strcmp(str2, str3));
//	printf("s3[%-7s], s1[%-7s] => ret = [%2d]\n", str3, str1, strcmp(str3, str1));
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buf[25];
//
//	strcpy(buf, "hello world");
//	printf("%s\n", buf);
//	strncpy(buf, "hello world", 5);
//	printf("%s\n", buf);
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buff[100];
//	char* output;
//	char input;
//	printf(">>");
//	printf("문장 입력 : ");
//	gets_s(buff);
//
//	for (;;)
//	{
//		printf("검색할 문자 입력 : ");
//		scanf(" %c", &input);
//		if (input == '0')
//		{
//			printf("종료합니다.\n");
//			break;
//		}
//		output = strchr(buff, input);
//		if(output == NULL)
//		{
//			printf("없습니다.\n");
//		}
//		else
//		{
//			while (output != NULL)
//			{
//				printf("%d번째에 있습니다.\n", output - buff + 1);
//				output = strchr(output + 1, input);
//			}
//		}
//		printf("\n");
//	}
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
//#include <stdio.h>
////#include <string.h>
//
//int mystring(char *m)
//{
//	int result = 0;
//	while (*m != NULL)
//	{
//		result++;
//		m++;
//	}
//	return result;
//}
//
//
//int main()
//{
//
//	char buff1[100] = "abfdasc";
//	int len = mystring(buff1);
//	printf("%d\n", len);
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int parsing(char* string, int* data)
//{
//	char* p;
//	int cnt;
//	cnt = 0;
//	p = strtok(string, "_");
//	//while (p) {
//	//	data[cnt++] = atoi(p);
//
//	//	p = strtok(NULL, "_");
//	//}
//	data[cnt++] = atoi(p);
//
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//	
//	p = strtok(NULL, "_");
//
//
//	return cnt;
//}
//int main(){
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(String, data);
//
//	for (i = 0; i < cnt; i++) {
//		printf("%d\n", data[i]);
//	}
//	return 0;
//}
//
#include <stdio.h>
int main()
{
	int integer = 123;
	char character = 'c';
	char string[] = "hellow, world";
	int* pointer = &integer;
	double pi = 3.141592;
	char buf[100];

	sprintf(buf, "integer : (decimal) %d (octal) %o \n", integer, integer);
	printf("%s \n", buf);

	sprintf(buf, "character : %c \n", character);
	printf("%s \n", buf);

	sprintf(buf, "string : %c \n", string);
	printf("%s \n", buf);

	sprintf(buf, "pointer addr : %p \n", pointer);
	printf("%s \n", buf);

	sprintf(buf, "floating point : %e //%f \n", pi, pi);
	printf("%s \n", buf);

	sprintf(buf, "percnet symbol : %% \n");
	printf("%s \n", buf);
	return 0;
}
