//Ponteiro para ponteiro
#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");
    
    //Declaracao de variaveis
    int num = 125;

    //Declaracao de ponteiros
    int *p1;
    int **p2;

    //Apontando
    p1 = &num;
    p2 = &p1;

    //Printando a partir do p2
    printf("Valor p2: %d", **p2);

    return 0;
}