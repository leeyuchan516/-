//#include <stdio.h>
//int var = 0;
//void func1()
//{
//	int var = 111;
//}
//void func2()
//{
//	var = 222;
//}
//void main()
//{
//	printf("%d ", var);
//	func1();
//	printf("%d ", var);
//	func2();
//	printf("%d ", var);
//}
//#include <stdio.h>
//
//struct BYTE
//{
//	char a;
//	char b;
//};
//
//void main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//}
//#include <stdio.h>
//struct student
//{
//	int id;
//	char* name;
//	float aver;
//};
//
//void main()
//{
//	struct student s = { 1, (char*)"이샘", 90.5 };
//	printf("아이디: %d\n", s.id);
//	printf("이름: %s\n", s.name);
//	printf("백분율 : %1f\n", s.aver);
//}
//#include <stdio.h>
//
//struct GUN
//{
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tractical_stock;
//	int magazine_size;
//};
//
//int main()
//{
//	struct GUN M416 = { "M416", 5.56, true, true, true, true, true, 30};
//	printf("화기명 :%s\n", M416.name);
//	printf("탄 종류 : %.2f\n", M416.bullet_type);
//	printf("스코프유무: %s", M416.scope ? "true" : "false");
//	return 0;
//}
//#include <stdio.h>
//
//struct _dummy_ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char mileage;
//};
//int main() {
//	int sizedummy = sizeof(_dummy_);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("더미 크기 :%d\n", sizedummy);
//	printf("vip정보 크기: %d\n", sizevip);
//	return 0;
//}
//#include <stdio.h>
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char mileage;
//};
//int main() {
//	VIP_PERSON lee_sam;
//	printf("고객 등급을 입력하세요\n");
//	while (true)
//	{
//		scanf("%c", &lee_sam.grade);
//		if (lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("고객 코드를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("마일리지를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//	return 0;
//}
//#include <stdio.h>
//
//struct bit {
//	int data;
//	int data2;
//};
//struct grade {
//	short grade;
//	short grade2;
//	short grade3;
//	short grade4;
//};
//int main()
//{
//	int sizebit = sizeof(bit);
//	printf("%d", sizebit);
//	int sizegrade = sizeof(grade);
//	printf("%d", sizegrade);
//}
//#include <stdio.h>
//
//struct _dummy_ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//int main() {
//	struct _dummy_ a;
//	scanf("%d", &a.data_0);
//	scanf(" %c", &a.data_1);
//	scanf("%f", &a.data_2);
//	printf("data_0 = %d\n", a.data_0);
//	printf("data_1 = %c\n", a.data_1);
//	printf("data_2 = %.3f\n", a.data_2);
//}
//#include <stdio.h>
//
//void main()
//{
//	short pt1;
//	scanf("%hd\n", &pt1);
//	printf("값 :%hd\n", pt1);
//}
//#include <stdio.h>
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printf("값 :%hd\n", pt);
//}
//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}
//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//short plus(short pt1);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = plus(pt);
//	printData(pt);
//	
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}
//
//short plus(short pt1)
//{
//	pt1 += 5;
//	return pt1;
//}
//#include <stdio.h>
//
//struct POINT {
//	short x;
//	short y;
//};
//
//POINT getDefaultData();
//void printData(POINT pt2);
//POINT plus(POINT pt1);
//
//void main()
//{
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = plus(pt);
//	printData(pt);
//
//}
//
//POINT getDefaultData()
//{
//	POINT pt1;
//	printf("두 수의 값 입력 >>");
//	scanf("%hd", &pt1.x);
//	scanf("%hd", &pt1.y);
//	return pt1;
//}
//
//void printData(POINT pt2)
//{
//	printf("값 : %hd\n", pt2.x);
//	printf("값 : %hd\n", pt2.y);
//}
//
//POINT plus(POINT pt1)
//{
//	pt1.x += 5;
//	pt1.y += 5;
//	return pt1;
//}
//#include <stdio.h>
//
//void main()
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}
//#include <stdio.h>
//
//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}
//#include <stdio.h>
//
//void main()
//
//{
//	char alpah[4] = { 'a', 'b', 'c', 'd' };
//	printf("%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//}
//#include <stdio.h>
//
//void main()
//{
//	int num[3] = { 3, 6, 9 };
//	printf("num의 안에 들어있는");
//	printf("1 번째 숫자는? %d\n", num[1]);
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	printf("%d번째에 %d 저장\n", 0, num[0]);
//	printf("%d번쨰에 %d 저장\n", 1, num[1]);
//	printf("%d번째에 %d 저장\n", 2, num[2]);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	int k = 0;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	for (int k = 0; k < 3; k++){
//		printf("%d번째에 %d 저장\n", k, num[k]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int arr[4];
	for (int k = 0; k < 5; k++)
	{
		scanf("%d", &arr[k]);
	}
	printf("\n\n");
	for (int k = 0; k < 5; k++) {
		printf("%d", arr[k]);
	}

}

//#include <stdio.h>
//
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//}
//#include <stdio.h>
//
//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//}
//#include <stdio.h>
//
//void main()
//{
//	int num[2] = { 10 ,3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0] = %d, ", num[0]);
//	printf("num[1] = %d\n", num[1]);
//}
