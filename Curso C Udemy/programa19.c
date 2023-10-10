//Calloc -> Mesma coisa que Malloc sendo que ele zera os valores dentro dos indexes do array: array[2]: [0] [0]
//                                                        malloc = array[2]: [numero estranho] [numero estranho]
//Alem disso o calloc multiplica os 2 indices passados
//calloc(num, 2) = num * 2

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declarando variaveis
    int num = 3;

    //Declarando ponteiros
    int *p;

    //Fazendo Calloc
    p = (int*)calloc(num, sizeof(int));

    //Solicitando elementos do array
    for (int i = 0; i < num; i++)
    {
        printf("Digite o valor para p[%d]: ", i);
        scanf("%d", &p[i]);
    }

    //Imprimindo resultado
    for (int i = 0; i < num; i++)
    {
        printf("p[%d] = %d\n", i, p[i]);
    }

    //Boas praticas
    free(p);
    p = NULL;

    return 0;
}