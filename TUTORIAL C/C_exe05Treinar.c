#include <unistd.h>

void ft_3num(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if(a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void ft_print_comb(void)
{
	char d;
	char e;
	char f;
}