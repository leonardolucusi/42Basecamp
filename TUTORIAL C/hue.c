#include <stdio.h>
int main(void)
{
	char str[] = "lolo";
	str[0] = 'x';
	str[1] = 'e';
	str[2] = 's';
	str[3] = 'q';
	printf("%c %s\n", *str,str);

}