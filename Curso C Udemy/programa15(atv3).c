/* Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do teclado. Em seguida, compare seus enderecos e exiba o conteudo
   do maior endereco. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declarando variavel
    int a;
    int b;

    //Solicitando input + input
    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite novamente um numero: ");
    scanf("%d", &b);

    //Imprimindo endereco de memoria
    printf("Memoria a: %p\n", &a);
    printf("Memoria b: %p\n", &b);

    //Comparando maior endereco de memoria e imprimindo o maior
    if (&a > &b)
    {
        printf("'a' tem maior memoria = %p", &a);
    }

    else
    {
        printf("'b' tem maior memoria = %p", &b);
    }

    return 0;
}