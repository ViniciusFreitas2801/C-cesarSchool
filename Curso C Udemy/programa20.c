//Realloc -> Realoca o valor da memoria basicamente

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declarando variaveis
    int num;

    //Declarando ponteiros
    int *p;

    //Solicitando quantidade elementos para o array
    printf("Informe a quantidade de elementos para o array: ");
    scanf("%d", &num);

    //Fazendo Malloc
    p = (int*)malloc(num * sizeof(int));

    //Vendo se tem espaco suficiente na memoria
    if (p)
    {
        printf("A variavel 'p' ocupa %ld bytes em memoria\n", num * sizeof(int));

        //Novo valor (realloc)
        printf("Informe um novo valor para os elementod do array: ");
        scanf("%d", &num);

        //Fazendo realloc
        p = (int*)realloc(p, num * sizeof(int)); //Diferentes do Malloc e Calloc o REALLOC usa 3 parametros
                                                 //sendo o primeiro parametro o proprio ponteiro
        //Nova vereficacao de espaco na memoria (apos realocacao)
        if (p)
        {
            printf("A variavel 'p' ocupa %ld bytes em memoria\n", num * sizeof(int));
        }

        else
        {
            printf("ERROR: MEMORIA INSUFICIENTE");
        }
        
    }
    
    else
    {
        printf("ERROR: MEMORIA INSUFICIENTE");
    }

    //Boas praticas
    free(p);
    p = NULL;

    return 0;
}