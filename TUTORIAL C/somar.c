#include <unistd.h>
#include <stdio.h>
int main(void)
{
	int n1 = 100;
	int n2 = 20000;
	int r = n1 + n2;
	//write(1, &r, 1);
	printf("%d\n", r);
}