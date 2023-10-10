/*Escreva um programa que declare um inteiro, um real, e um char, e ponteiros para inteiro, real e char.
* Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros.
* Imprima os valores das variaveis antes e apos a modificacao.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declarando variaveis
    int varInt = 2;
    float varFloat = 5.0;
    char varChar[20] = "Alho";

    //Declarando ponteiros
    int *pInt;
    float *pFloat;
    char *pChar;

    //Ponteiro apontado para variaveis
    pInt = &varInt;
    pFloat = &varFloat;
    pChar = &varChar;

    //Imprimindo antes da modificacao
    printf("Inteiro: %d\n", varInt);
    printf("Float: %.2f\n", varFloat);
    printf("Char: %s\n", varChar);
    printf("=========================\n");

    //Modificando valores com ponteiro
    *pInt = 50;
    *pFloat = 123.9;
    strcpy(pChar, "cebola"); //Muda o valor da string

    //Imprimindo depois da modificacao
    printf("Inteiro: %d\n", varInt);
    printf("Float: %.2f\n", varFloat);
    printf("Char: %s\n", varChar);
 
    return 0;
}