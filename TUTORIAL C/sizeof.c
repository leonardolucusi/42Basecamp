# include <stdio.h>

int main()
{
	char c = 'a';
	printf("%lu\n", sizeof(c));
	write (1, &c, 1);
}