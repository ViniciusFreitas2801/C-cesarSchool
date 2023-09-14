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