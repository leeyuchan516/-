#include  <stdio.h>
//#include <string.h>

int mystrcmp(char *m, char *n)
{
	while (m != NULL || n != NULL)
	{
		if (m > n)
		{
			return 1;
		}
		else if (m < n)
		{
			return -1;
		}
		else
		{
			m++;
			n++;
		}
	}


	return 0;
};

int main()
{
	const char* str1 = "SPUX";
	const char* str2 = "SPUX";
	const char* str3 = "SOLARIS";

	printf("%2d\n", mystrcmp(str1, str2));
	printf("%2d\n", mystrcmp(str2, str3));
	printf("%2d\n", mystrcmp(str3, str1));
}