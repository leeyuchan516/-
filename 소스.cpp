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
//		printf("참입니다.\n");
//	else
//		printf("%d %c %d = %d입니다.\n", data[0], oper, data[1], v);
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
//	 printf("이름 :");
//	 scanf(" %s", gameCo.gms[gameCo.gmCount].name);
//	 printf("부서 :");
//	 scanf("%d", &gameCo.gms[gameCo.gmCount].part);
//	 printf("월급 : ");
//	 scanf("%d", &gameCo.gms[gameCo.gmCount].salary);
//	 gameCo.gmCount++;
//
//	 return gameCo;
//}
//void main()
//{
//	printf("게임을 출시해보자!\n");
//	COMPANY gameCo;
//
//	printf("먼저 GM부터 고용할까?\n");
//	while (1) {
//		gameCo = HireGM_once(gameCo);
//		printf("더 고용할까?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n')break;
//	}
//	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
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
	SNACK snacks[N] = { {1500, 3, "레몬칩"}, {1000, 2, "달고나"} };
	printf("<<과자자판기!>>\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
	}
}