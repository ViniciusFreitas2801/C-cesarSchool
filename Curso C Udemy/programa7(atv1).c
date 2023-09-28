//Questao 2

#include <stdio.h>
#include <string.h>

struct stDados
{
    char nome[40];
    int idade;
    char endereco[100];
};

int main(){

    struct stDados varDados;

    printf("Digite seu nome: ");
    fgets(varDados.nome, 40, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &varDados.idade);
    getchar();

    printf("Digite seu endereco: ");
    fgets(varDados.endereco, 100, stdin);
    
    printf("\n");

    printf("Nome: %s", varDados.nome);
    printf("Idade: %d\n", varDados.idade);
    printf("Endereco: %s", varDados.endereco);


    return 0;
}