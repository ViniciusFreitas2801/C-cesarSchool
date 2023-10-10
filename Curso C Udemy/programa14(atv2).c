/* Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e exiba o maior endereco */

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declaracao de variavel
    int var1;
    int var2;

    //Declarando ponteiro
    int *p1;
    int *p2;

    //Apontando ponteiro para variavel
    p1 = &var1;
    p2 = &var2;

    //Imprime os enderecos de memoria de cada variavel
    printf("Endereco de memoria de var1: %p\n", &var1);
    printf("Endereco de memoria de var2: %p\n", &var2);

    //Compara e imprime qual o maior endereco de memoria
    if (&var1 > &var2)
    {
        printf("O maior endereco de memoria eh de var1 que eh: %p\n", &var1);
    }

    else
    {
        printf("O maior endereco de memoria eh de var2 que eh: %p\n", &var2);
    }
    
    return 0;
}