#include<stdio.h>

int main()
{
	int soma=1+1;
	printf("1+1=%d \n",soma);

	int numero1=10;
	int numero2=20;

	soma=numero1+numero2;//Podemos fazer o valor de uma variavel mudar no decorrer
			     //de um programa
	printf("%d+%d=%d\n",numero1,numero2,soma);

	//Ao invés de criar uma variável para armazenar um resultado de operação matemática,
	//podemos colocar direto esses cálculos dentro do printf
	printf("%d-%d=%d\n",soma,numero1,(soma-numero1));

}
