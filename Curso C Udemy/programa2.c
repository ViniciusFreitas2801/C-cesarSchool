#include <stdio.h>
#include <string.h>

struct timeValorantLoud
    {
        int tituloChampions;
        char equipe[100];
        char mapasFavoritos[100];
        char bonecosMaisPicados[100];
    };

int main(void) {
    
    struct timeValorantLoud valorant[2];

    //Input
    for (int i = 0; i < 2; i++)
    {
        printf("Informe quantos titulos da Champions a Loud tem: ");
        scanf("%d", &valorant[i].tituloChampions);
        getchar(); //Corrige bug

        printf("Digite os nomes do time e staff do time da Loud: ");
        fgets(valorant[i].equipe, 100, stdin);

        printf("Informe os 3 mapas favoritos da Loud: ");
        fgets(valorant[i].mapasFavoritos, 100, stdin);

        printf("Informe os 3 bonicos mais picados pelo time da Loud: ");
        fgets(valorant[i].bonecosMaisPicados, 100, stdin);
    }

    //Output
    for (int i = 0; i < 2; i++)
    {
        printf("========== Dados Time %d Loud ==========\n", i+1);
        printf("Titulos:%d\n", valorant[i].tituloChampions);
        printf("Equipe:%s", valorant[i].equipe);
        printf("Mapas:%s", valorant[i].mapasFavoritos);
        printf("Bonecos:%s", valorant[i].bonecosMaisPicados);
    }

  return 0;
}