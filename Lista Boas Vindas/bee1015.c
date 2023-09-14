#include <stdio.h>
#include <math.h>

int main(void) {
    //Declaracao de variaveis
    float x1, y1, x2, y2;
    double distancia;

    //Entrada
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    
    //Calculo
    distancia = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    //Saida
    printf("%.4f", distancia);

  return 0;
}