//Alocacao de array multidimensionais

#include <stdio.h>
#include <stdlib.h>

/* Matriz bidimensional
 * [0|0][0|1][0|2]
 * [1|0][1|1][1|2]
 * [2|0][2|1][2|2]
 * 
 * int -> 4 bytes -> 1 x 4 = 4 bytes
 *                   2 x 4 = 8 bytes
 *             
 * matriz ->         3 x 3 x 4 = 36 bytes
 * linha = 3;
 * coluna = 3;
 */

int main(){

    system("cls");

    //Declarando variaveis
    int linha = 3;
    int coluna = 3;

    //Declarando ponteiros
    int *p;

    //Fazendo malloc em matriz
    p = (int*)malloc(linha * coluna * sizeof(int));

    //Preenchendo valores da matriz
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            p[i * coluna + j] = 3 * i +j;
        }
    }

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