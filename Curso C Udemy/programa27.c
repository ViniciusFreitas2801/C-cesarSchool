//Array de ponteiros
#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declarando array com ponteiro do tipo string
    char *timeLoud[5] = {"Aspas", "Less", "Saadhack", "Pancada", "Sacy"};

    for (int i = 0; i < 5; i++)
    {
        printf("Players da Loud: %s\n", timeLoud[i]);
    }
    
    return 0;
}