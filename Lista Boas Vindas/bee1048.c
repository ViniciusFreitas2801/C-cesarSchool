#include <stdio.h>

int main(void) {
    
    //Declaracao de variaveis
    float salario_atual;

    //Entrada
    scanf("%f", &salario_atual);

    //Saida
    if (salario_atual <= 400)
    {
        printf("Novo salario: %.2f\n", (salario_atual * 0.15) + salario_atual, "\n");
        printf("Reajuste ganho: %.2f\n", ((salario_atual * 0.15) + salario_atual) - salario_atual, "\n");
        printf("Em percentual: 15 %%");
    }

    else if (salario_atual <= 800)
    {
        printf("Novo salario: %.2f\n", (salario_atual * 0.12) + salario_atual, "\n");
        printf("Reajuste ganho: %.2f\n", ((salario_atual * 0.12) + salario_atual) - salario_atual, "\n");
        printf("Em percentual: 12 %%");
    }

    else if (salario_atual <= 1200)
    {
        printf("Novo salario: %.2f\n", (salario_atual * 0.10) + salario_atual, "\n");
        printf("Reajuste ganho: %.2f\n", ((salario_atual * 0.10) + salario_atual) - salario_atual, "\n");
        printf("Em percentual: 10 %%");

    }

    else if (salario_atual <= 2000)
    {
        printf("Novo salario: %.2f\n", (salario_atual * 0.07) + salario_atual, "\n");
        printf("Reajuste ganho: %.2f\n", ((salario_atual * 0.07) + salario_atual) - salario_atual, "\n");
        printf("Em percentual: 7 %%");

    }

    else
    {
        printf("Novo salario: %.2f\n", (salario_atual * 0.04) + salario_atual, "\n");
        printf("Reajuste ganho: %.2f\n", ((salario_atual * 0.04) + salario_atual) - salario_atual, "\n");
        printf("Em percentual: 4 %%");
    }

  return 0;
}