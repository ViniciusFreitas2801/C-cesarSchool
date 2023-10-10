//Malloc -> Como se fosse um array com index nao predeterminado, mas escrito como ponteiro

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declaracao de variaveis
    int qtd;

    //Declaracao de array (ponteiro)
    int *p;

    //Solicitando tamanho do array
    printf("Digite o tamanho do array: ");         
    scanf("%d", &qtd);

    //Fazendo maloc
    p = (int*)malloc(qtd * sizeof(int));     // (qtd * sizeof(int)) -> numero * 4 (ja que um int tem 4 bytes)
                                             // ou seja, array[qtd], ou array[numero], 
                                             // array tornara um array e o 'qtd' sera a quantidade de indexes    

    //Colocando os elementos no array
    for (int i = 0; i < qtd; i++)
    {
        printf("Digite o valor para [%d]: ", i);
        scanf("%d", &p[i]);
    }
    
    //Imprimindo o array
    for (int i = 0; i < qtd; i++)
    {
        printf("Array[%d] = %d\n", i, p[i]);
    }
    
    //Boas praticas em alocacao de memoria dinamica
    free(p); 
    p = NULL;

    return 0;
}

//If averiguando se existe quantidade em memoria suficiente no programa

/*
#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    //Declarando variaveis
    int num = 442424;

    //Declarando ponteiros
    int *p;

    //Fazendo Calloc
    p = (int*) malloc(num * sizeof(int));

    //Vendo se tem espaco suficiente na memoria
    if (p)
    {
        printf("A variavel 'p' ocupa %ld bytes em memoria\n", num * sizeof(int));
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
*/