#include <stdio.h>
#include <string.h>

enum enSemana
{
    domingo,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
};

int main(){

    enum enSemana diaX, diaY;

    diaX = 1;
    diaY = 0;

    if (diaX == diaY)
    {
        printf("Dias enguaus");
    }

    else
    {
        printf("Dias NAO enguaus");
    }
    

    return 0;
}