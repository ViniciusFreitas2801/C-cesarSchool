//Arrays e Ponteiros
#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

   /*---------------------
    *|   |   |   |   |   |
    *---------------------
    *  0   1   2   3   4
    */

    int valores[5]; //Cria array

    //Input
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d/5 valor: ", i+1);   
        scanf("%d", &valores[i]);
    }

    //Output valores
    printf("Os valores informados foram: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", valores[i]);
    }

    //Output endereco de memoria e valor da posicao 0
    printf("%p %d\n", &valores[0], valores[0]); 
    printf("%p %d\n", valores, valores[0]);

    //A variavel "valores" aponta pro endereco 0 do array

    return 0;
}