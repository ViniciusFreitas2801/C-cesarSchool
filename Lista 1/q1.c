#include <stdio.h>

int main(void)
{
    //Declaracao de variaveis
    float A, B, C, aux;
    
    //Input
    scanf("%f %f %f", &A, &B, &C);

    //Ordenando de forma decrescente
    if (A < B)
    {
        aux = A;
        A = B;
        B = aux;
    }
    if (B < C)
    {
        aux = B;
        B = C;
        C = aux;
    }
    if (A < B)
    {
        aux = A;
        A = B;
        B = aux;
    }

    //Estrutura de decisao
    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
        exit(0);
    }

    if (A * A == (B * B) + (C * C))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    if (A * A > B * B + C * C)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    if (A * A < (B * B) + (C * C))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    if (A == C && C != B && A != B)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    if (B == C && A != B && A != C)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    if (A == B && A != C && C != B)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}