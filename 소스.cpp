//#include <stdio.h>
//int main()
//{
//	int integer = 123;
//	char character = 'c';
//	char string[] = "hellow, world";
//	int* pointer = &integer;
//	double pi = 3.141592;
//	char buf[100];
//
//	sprintf(buf, "integer : (decimal) %d (octal) %o \n", integer, integer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "character : %c \n", character);
//	printf("%s \n", buf);
//
//	sprintf(buf, "string : %c \n", string);
//	printf("%s \n", buf);
//
//	sprintf(buf, "pointer addr : %p \n", pointer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "floating point : %e //%f \n", pi, pi);
//	printf("%s \n", buf);
//
//	sprintf(buf, "percnet symbol : %% \n");
//	printf("%s \n", buf);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char parsing(char* string, int* data)
//{
//	char* p;
//	char oper;
//	int cnt = 0;
//
//	p = strtok(string, " ");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, " ");
//
//	oper = *p;
//	p = strtok(NULL, " ");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "= ");
//
//	data[cnt++] = atoi(p);
//
//	return oper;
//	
//}
//int main(){
//	char String[100];
//	gets_s(String);
//	int data[3];
//	int v=0;
//	char oper = parsing(String, data);
//
//
//
//	if (oper == '*')
//	{
//		v = data[0] * data[1];
//	}
//	if (oper == '-')
//	{
//		v = data[0] - data[1];
//	}
//	if (oper == '+')
//	{
//		v = data[0] + data[1];
//	}
//	if (oper == '/')
//	{
//		v = data[0] / data[1];
//	}
//	if (oper == '%')
//	{
//		v = data[0] % data[1];
//	}
//	if (v == data[2])
//		printf("���Դϴ�.\n");
//	else
//		printf("%d %c %d = %d�Դϴ�.\n", data[0], oper, data[1], v);
//	return 0;
//}
//
//#include <stdio.h>
//
//struct GM {
//	int no;
//	char name[10];
//	int part;
//	int salary;
//};
//struct COMPANY {
//	GM gms[5];
//	int gmCount = 0;
//};
// COMPANY HireGM_once(COMPANY gameCo)
//{
//	 gameCo.gms[gameCo.gmCount].no = gameCo.gmCount + 1;
//	 printf("�̸� :");
//	 scanf(" %s", gameCo.gms[gameCo.gmCount].name);
//	 printf("�μ� :");
//	 scanf("%d", &gameCo.gms[gameCo.gmCount].part);
//	 printf("���� : ");
//	 scanf("%d", &gameCo.gms[gameCo.gmCount].salary);
//	 gameCo.gmCount++;
//
//	 return gameCo;
//}
//void main()
//{
//	printf("������ ����غ���!\n");
//	COMPANY gameCo;
//
//	printf("���� GM���� ����ұ�?\n");
//	while (1) {
//		gameCo = HireGM_once(gameCo);
//		printf("�� ����ұ�?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n')break;
//	}
//	printf("GM %d���� �̾Ҵ�!\n", gameCo.gmCount);
//}
#include <stdio.h>

struct SNACK {
	int price;
	int stock;
	char name[20];
};
void main()
{
	const int N = 2;
	SNACK snacks[N] = { {1500, 3, "����Ĩ"}, {1000, 2, "�ް�"} };
	printf("<<�������Ǳ�!>>\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d.[%6s] %4d�� (%d������)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
	}
}