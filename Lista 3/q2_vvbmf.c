#include <stdio.h>
#include <string.h>

int main() {

    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
    {
        int K;
        int mesmoIdioma = 1;
        char S[30];
        char idioma[30];

        scanf("%d", &K);
        getchar(); 

        fgets(idioma, 30, stdin);
        idioma[strlen(idioma) - 1] = '\0'; 

        for (int j = 1; j < K; j++) 
        {
            fgets(S, 30, stdin);
            S[strlen(S) - 1] = '\0'; 

            if (strcmp(S, idioma) != 0) 
            {
                mesmoIdioma = 0;
            }
        }

        if (mesmoIdioma) 
        {
            printf("%s\n", idioma);
        } 
        
        else 

        {
            printf("ingles\n");
        }
    }

    return 0;
}
