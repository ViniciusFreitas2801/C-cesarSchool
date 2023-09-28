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
    
    struct timeValorantLoud valorant;

    //Input
    printf("Informe quantos titulos da Champions a Loud tem:\n");
    scanf("%d", &valorant.tituloChampions);

    printf("Digite os nomes do time e staff do time da Loud:\n");
    scanf("\n"); //Codigo usado para corrigir bug
    fgets(valorant.equipe, 100, stdin);
    
    printf("Informe os 3 mapas favoritos da Loud:\n");
    fgets(valorant.mapasFavoritos, 100, stdin);

    printf("Informe os 3 bonicos mais picados pelo time da Loud:\n");
    fgets(valorant.bonecosMaisPicados, 100, stdin);

    //Output
    printf("========== Dados Loud Valorant ==========\n");
    printf("Titulos:%d\n", valorant.tituloChampions);
    printf("Equipe:%s\n", valorant.equipe);
    printf("Mapas:%s\n", valorant.mapasFavoritos);
    printf("Bonecos:%s\n", valorant.bonecosMaisPicados);

  return 0;
}