//Alocacao de matriz, metodo baseado no codigo de Pamela
//Em diagonal principal

/* Diagonal principal
 * [1][0][0]
 * [0][1][0]
 * [0][0][1]
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declaracao de variaveis
    int linha;
    int coluna;

    //Declaracao ponteiro
    int *p;

    //Solicitando linha e coluna ao usuario
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &linha);

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &coluna);

    //Fazendo malloc para matriz
    p = (int*)malloc(linha * coluna * sizeof(int));

    //Colocando resultado + imprimindo matriz
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (i == j)
            {
                p[i * coluna + j] = 1;
            }

            else
            {
                p[i * coluna + j] = 0;
            }
        }
    }

    //Imprimindo matriz
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%2d", p[i * coluna + j]);
        }
        printf("\n");
    }
    
    //Boas praticas
    free(p);
    p = NULL;
    
    return 0;
}