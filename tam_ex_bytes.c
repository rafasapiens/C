#include<stdio.h>

int main(void)
{
   printf("O tamanho de int é %d bytes\n",sizeof(int));
   printf("O tamanho de short int é %d bytes\n",sizeof(short int));
   printf("O tamanho de long int é %d bytes\n",sizeof(long int));
   printf("O tamanho de signed int é %d bytes\n",sizeof(signed int));
   printf("O tamanho de unsigned int é %d bytes\n",sizeof(unsigned int));
   printf("O tamanho de short signed int é %d bytes\n",sizeof(short signed int));
   printf("O tamanho de short unsigned int é %d bytes\n",sizeof(short unsigned int));
   printf("O tamanho de long signed int é %d bytes\n",sizeof(long signed int));
   printf("O tamanho de long unsigned int é %d bytes\n",sizeof(long unsigned int));
   return 0;
}
