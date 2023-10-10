//Alocacao de matriz, metodo baseado no codigo de Pamela
//Inserindo valores linha, colunas e da matriz do usuario

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declarando variaveis
    int linha;
    int coluna;

    //Declarando ponteiro
    int *p;

    //Solicitando valores ao usuario
    printf("Digite quantas linhas voce quer na matriz: ");
    scanf("%d", &linha);

    printf("Digite quantas colunas voce quer na matriz: ");
    scanf("%d", &coluna);

    //Fazendo alocacao da matriz
    p = (int*)malloc(linha * coluna * sizeof(int));

    //Solicitando inserimento de valores na matriz
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Digite o valor para p[%d][%d]", i, j);
            scanf("%d", &p[i * coluna + j]);
        }
    }

    //Imprimindo matriz
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%d\t", p[i * coluna + j]);
        }
    }
    
    //Boas praticas
    free(p);
    p = NULL;

    return 0;
}