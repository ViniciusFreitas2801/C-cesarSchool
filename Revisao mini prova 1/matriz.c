#include <stdio.h>

int main(void) {

    //Matrizes para multiplicacao
    int mA [3][2];
    int mB [2][2];
    int mResultado[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mResultado[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                mResultado[i][j] += mA[i][k] * mB[k][j];
            }
            
        }
        
    }
    

    return 0;
}


































    /*
    int mA[3][3];
    int mB[3][3];
    int mResultado[3][3];

    //Pedindo ao usuario os valores da matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mA[i][j]);
        }
    }

    //Pedindo ao usuario os valores da matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mB[i][j]);
        }
    }

    //Soma
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mResultado[i][j] = mA[i][j] + mB[i][j];
        }
        
    }

    //Printando
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", mResultado[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}

*/






























    /*
    //Matrizes
    int matriz[2][3];
    int matrizTransposta[3][2];

    //Pedindo ao usuario os valores da matriz
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    //Transformando a matriz em matriz transposta
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    //Printando matriz transposta
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%3d", matrizTransposta[i][j]);
        }
        printf("\n");
    }
    

   return 0;
}

*/


























    /*
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = 0;
        }
    }

    for (int i; i < 3; i++)
    {
        matriz[i][2 - i]++;
    }   


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    
    */