#include <stdio.h>

int main(void) {
    
    //Declaracao de variaveis
    int senha;

    //Loop + Entrada e Saida
    while (senha != 2002)
    {
        scanf("%d", &senha);
        if (senha != 2002)
        {
          printf("Senha Invalida\n");
        }
    }
    
    printf("Acesso Permitido");

  return 0;
}