#include <stdio.h>
#include <unistd.h>

int main()
{
	int a = 10;
	int b = 20;
	
	printf("%d hello %d world\n",  b , a);
	char c;
	write (1, &c, 1);
}

