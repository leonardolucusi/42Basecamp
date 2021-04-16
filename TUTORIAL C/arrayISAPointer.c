#include <stdio.h>
int main(void)
{
	/*
	int tab[3];
	*(tab) == tab[0]
	*(tab + 1) == tab[1];
	*(tab + 2) == tab[2];
	*(tab) = 10;
	tab[1] = 10;
	tab[2] = 678;
	int sum;
	sum = *(tab) + *(tab + 1);
	printf("%d\n" , sum);
	printf("%d\n", *(tab));
	printf("******************\n");	*/

	int tab[3]; 	// crio um array chamado tab - tab[0], tab[1], tab[2]
	int *tab2[2]; 	// crio um ponteiro/array chamado tab2 - tab2[0], tab[1] 

	tab[2] = 123; 		//tab[2] recebe o valor 123;
	tab2[1] = tab; 		// tab2[1] aponta para o endereco tab;
	tab2[1][2] = 13;	// tab2[1] é tab, o [2] é o [2] de tab, fica assim tab[2], então tab[2] recebe 13;

	printf("%d\n", tab[2]);

}