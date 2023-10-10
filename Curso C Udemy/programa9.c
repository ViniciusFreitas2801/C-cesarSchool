//Entendendo Ponteiro

#include <stdio.h>
#include <string.h>

void incremento(int* contador)
{
    printf("Antes de incrementar = %d\n", (*contador));
    printf("Endereco de memoria = %d\n", contador);

    printf("Depois de incrementar = %d\n", ++(*contador));
    printf("Endereco de memoria = %d\n", contador);
} 

int main(){

    int contador = 10;

    printf("Antes de incrementar = %d\n", contador);
    printf("Endereco de memoria = %d\n", &contador);
    

    incremento(&contador);
    printf("Depois de incrementar = %d\n", contador);
    printf("Endereco de memoria = %d\n", &contador);

    return 0;
}