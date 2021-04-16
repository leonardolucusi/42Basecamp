#include <stdio.h>

void func(int *a)
{
	*a = *a + 42;
}

int main(void)
{
	int a;

	a = 42;
	printf("%d\n", a);
	func(&a);
	printf("%d\n", a);
	return(0);

}