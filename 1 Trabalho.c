#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int contador =1;
	
	void imprimaMensagem( void );
	
	imprimaMensagem();
	while(contador <= 5)
	{
		printf( "%i \n", contador);
		++contador;
	}


	return 0;
}

void imprimaMensagem( void )
{
	printf("Teste ^_^ \n");
}

