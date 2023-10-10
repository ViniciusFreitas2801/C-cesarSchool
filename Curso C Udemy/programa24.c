//Alocacao de matriz, metodo baseado no codigo de Pamela
//Em diagonal secundaria

/* Diagonal secundaria
 *          
 *          L0 L1 L2
 *          [0][0][1] C0
 *          [0][1][0] C1
 *          [1][0][0] 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declaracao de variaveis
    int linha;
    int coluna;

    //Declaracao de ponteiro
    int *p;

    //Solicitando quantidade de linhas e colunas
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linha);

    printf("Digite a quantidade de colunas: ");
    scanf("%d", &coluna);

    //Fazendo Malloc
    p = (int*)malloc(linha * coluna * sizeof(int));

    //Inserindo valores (diagonal secundaria)
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (j == coluna - i - 1)
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