//Usando Ponteiro
#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    int n; //Variavel = guarda seu valor na memoria

    int *p; //Ponteiro = valor que aponta paro endereco de memoria

    printf("Digite um numero: ");
    scanf("%d", &n);

    p = &n; //Inicializando ponteiro

    printf("O numero digitado foi: %d\n", n);
    printf("O endereco da memoria eh: %d\n", &n); //Para acessar o endereco de memoria se usa -> %p <- e -> & <-

    printf("Endereco de memoria com ponteiro: %p\n", p);

    return 0;
}