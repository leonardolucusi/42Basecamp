#include <stdio.h>

int main(void)
{
	int x;
	x = 10;
	int *ponteiro; 		// Criei um ponteiro com * //
	ponteiro = &x; 		// Meu ponteiro recebe o endereço de x
	int y = 20;			//printf("%i\n", *ponteiro); com * eu acesso o valor que o ponteiro esta apontando
						//printf("%i\n", ponteiro); sem o * eu acesso o endereço do ponteiro
	*ponteiro = y;     	// o Valor do meu ponteiro vai ser o de y;
	x= 30;
	printf("%i %i\n", *ponteiro, x);
}