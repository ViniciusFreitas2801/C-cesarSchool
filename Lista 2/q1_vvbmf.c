#include <stdio.h>

int rafael(int x, int y)
{   
    int rafael;
    rafael = (3*x)*(3*x) + (y*y);

    return rafael;
}
int beto(int x, int y)
{
    int beto;
    beto = 2*(x*x) + (5*y)*(5*y);

    return beto;
}

int carlos(int x, int y)
{
    int carlos;
    carlos = -100*x + (y*y*y);

    return carlos;
}

int main(void) {
    int N, x, y;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {

        scanf("%d %d", &x, &y);

        if (rafael(x,y) > beto(x,y) && rafael(x,y) > carlos(x,y))
        {
            printf("Rafael ganhou\n");
        }

        else if (beto(x,y) > rafael(x,y) && beto(x,y) > carlos(x,y))
        {
            printf("Beto ganhou\n");
        }

        else
        {
            printf("Carlos ganhou\n");
        }
          
    }

  return 0;

}