/* Faca um programa que leia dois valores inteiros e chame a funcao que rescreva estes 2 valores de entrada e retorne o maior valor na primeira variavel
   e o menor valor na segunda variavel. Escreva o conteudo das 2 variaveis na tela. */

#include <stdio.h>
#include <stdlib.h>

void swap(int *var1, int *var2)
{
    int temp;

    if (*var1 < *var2)
    {
        temp = *var1;
        *var1 = *var2;
        *var2 = temp;
    }
}

int main(){

    system("cls");

    //Declarando variaveis
    int var1;
    int var2;

    //Declarando ponteiros
    int *p1;
    int *p2;

    //Apontando para variaveis
    p1 = &var1;
    p2 = &var2;

    //Input
    printf("Digite um valor inteiro qualquer: ");
    scanf("%d", p1); //Nao colocar &, iria puxar a memoria, por estar apontado com ponteiro

    printf("Digite um valor inteiro qualquer novamente: ");
    scanf("%d", p2); //Nao colocar &, iria puxar a memoria, por estar apontado com ponteiro

    //Puxando funcao
    swap(&var1, &var2);

    //Printando resultado
    printf("O maior valor eh: %d\n", var1);
    printf("O menor valor eh: %d\n", var2);

    return 0;
}