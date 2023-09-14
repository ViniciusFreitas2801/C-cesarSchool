#include <stdio.h>

int funcao(int H1, int M1, int H2, int M2)
{
  int somaMinutosInicio = H1 * 60 + M1;
  int somaMinutosFim = H2 * 60 + M2;

  if (somaMinutosInicio > somaMinutosFim) 
  {
    return(24 * 60 - (somaMinutosInicio - somaMinutosFim));
  }

  else 
  {
    return(somaMinutosFim - somaMinutosInicio);
  }
}


int main(void) {
    
    while (1) 
    {
      //Declaracao de variaveis
      int H1, M1, H2, M2;

      scanf("%d %d %d %d", &H1, &M1, &H2, &M2);

      if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0) 
      {
        break;
      }

      printf("%d\n",funcao(H1, M1, H2, M2));
    }

    return 0;
}