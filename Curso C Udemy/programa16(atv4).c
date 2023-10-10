//Void swap, troca valores numa funcao com ponteiro

#include <stdio.h>
#include <stdlib.h>

//Funcao
void swap(int *n1, int *n2)
{
    int temp;  
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    //Obs temp = *n1;
    //temp -> armazenamento
    //*n1 -> valor
}

int main(){

    system("cls");

    //Declarando variaveis
    int n1 = 5;
    int n2 = 10;

    //Declarando ponteiros
    int *p1;
    int *p2;

    //Apontando para variaveis
    p1 = &n1;
    p2 = &n2;

    //Puxando funcao swap
    swap(&n1, &n2);

    //Imprimindo valores trocados
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);


    return 0;
}