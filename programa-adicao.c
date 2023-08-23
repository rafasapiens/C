/* Figura 2.5: fig02_05.c
   Programa de adição */

#include <stdio.h>

// função main inicia execução do programa
int main(void)
{
	int inteiro1; // primeiro número a ser informado pelo user
	int inteiro2; // segundo número a ser informado
	int soma;     // variavel em que a soma sera mantida

	printf("Digite o primeiro número\n"); // prompt
	scanf("%d", &inteiro1); // lê um inteiro

	printf("Digite o segundo inteiro\n"); //prompt
	scanf("%d", &inteiro2); // lê um inteiro

	soma= inteiro1+inteiro2; // atribui o total à soma

	printf("A soma é %d\n", soma); //print soma

	return 0; // indica que o programa foi concluído com sucesso
} // fim da função main
