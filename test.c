
#include <stdio.h>

int main()
{
	char str[50];
	fgets(str, 50, stdin);
	fputs(str, stdout);
}
