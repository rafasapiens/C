#include <stdio.h>

int main(void)
{
	printf("\7 \a");  /*emite som de alerta*/

	printf("\nMeu primeiro programa - C Progressivo!\n\n\n");
	printf("Aspas duplas\"\n");
	printf("Barra: \\");
	printf("Carriage return: \r"); /*volta o cursor p inicio da linha*/
	getchar(); /*aguarda digitação do usuario*/
	printf("\7 \a");

	printf("\n");

	printf("Antes do \\t \t Depois do \\t"); /* insere TAB*/
	printf("\7 \a\n\n");
	
	return 0;

}
/* digite no shell gcc programa1.c -o programa1 para compilar 
 * digite ./programa1 para executar o programa
 */
