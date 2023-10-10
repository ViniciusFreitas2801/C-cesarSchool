//Array de ponteiro -> !!!Nao confundir com array de alocacao de memoria dinamica!!!
#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declaracao de variaveis
    int num = 2;

    //Declaracao de array sem ponteiro
    int arrVar[3];

    //Declaracao de array com ponteiro
    int *arrP[10] = {NULL}; //NULL deixa todos indexs do array vazios

    //Alocando valores ao array com ponteiro
    arrP[0] = &num;

    //Colocando o array sem ponteiro dentro do array com ponteiro no index [1] (do array COM ponteiro)
    arrP[1] = arrVar;

    //Colocando um valor do array sem ponteiro (que esta dentro do array com ponteiro)
    arrP[1][2] = 4244;

    //Imprimindo valor do array sem ponteiro (que esta dentro do array com ponteiro)
    printf("%d", arrP[1][2]);
    
    return 0;
}