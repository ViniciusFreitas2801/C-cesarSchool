#include <stdio.h>

int valor(int x)
{
    int valor;
    valor = 1000;

    return valor;
}

int main(void) {

    int x;
    
    if (2 > valor(x))
    {
        printf("if 1 correto");
    }

    else
    {
        printf("else ativado");
    }
    

  return 0;
}