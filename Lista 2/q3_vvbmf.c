#include <stdio.h>

int cartasTrocadas(int aliceC[], int biaC[], int aliceTamanho, int biaTamanho) 
{
  int i = 0;
  int j = 0;
  int trocadasMax = 0;

  while (i < aliceTamanho && j < biaTamanho) {
    if (aliceC[i] == biaC[j]) {
      trocadasMax++;
      i++;
      j++;
      } 
      else if (aliceC[i] < biaC[j]) 
      {
      i++;
      } 
      else 
      {
      j++;
      }
    }

    return trocadasMax;
}

int main() {
    while (1) 
    {
      int A, B;
        scanf("%d %d", &A, &B);

        if (A == 0 && B == 0) 
        {
            break;
        }

        int aliceC[A];
        int biaC[B];

        for (int i = 0; i < A; i++) 
        {
            scanf("%d", &aliceC[i]);
        }

        for (int i = 0; i < B; i++) 
        {
            scanf("%d", &biaC[i]);
        }

        int resultado = cartasTrocadas(aliceC, biaC, A, B);
        printf("%d\n", resultado);
    }

    return 0;
}