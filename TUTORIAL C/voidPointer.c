#include <stdio.h>
/* void e' utilizado para dizer a uma funcao que
 nao retorne nada ou que n pegue nenhum parametro */
int main(void)
{
	void *ptr;
	int  *ptr_i;
	char *ptr_c;

	ptr = ptr_i;  // NAO gera erro
	//ptr_i = prt_c; // gera erro
	ptr_i = ptr;  // NAO gera erro
	return(0);

}