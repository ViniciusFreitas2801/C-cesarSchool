#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero de 0 a 10: ");
    scanf("%d", &num);
    int matriz[num][num];
    int i, j;

    printf("Suas matriz sao %dx%d\n", num, num);

    for (i=0;i<num;i++) { //I = linha
        for (j=0;j<num;j++) { //J = coluna
            matriz[i][j] = i + j;
            printf("Elementos [%d][%d] igual a %d\n", i, j, matriz[i][j]);

        }
    }
    return 0;
}