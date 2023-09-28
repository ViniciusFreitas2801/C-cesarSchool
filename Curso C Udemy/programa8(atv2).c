//Questao 3
#include <stdio.h>
#include <string.h>
#define count 3

struct stAlunos
{
    char nome[40];
    int matricula;
    char curso[40];
};

int main(){

    struct stAlunos vetAlunos[count];

    for (int i = 0; i < count; i++)
    {
        printf("Digite o nome do aluno %d: ", i+1);
        fgets(vetAlunos[i].nome, 40, stdin);

        printf("Digite o numero da matricula do aluno %d: ", i+1);
        scanf("%d", &vetAlunos[i].matricula);
        getchar();

        printf("Digite o nome do curso do aluno %d: ", i+1);
        fgets(vetAlunos[i].curso, 40, stdin);
    }

    for (int i = 0; i < count; i++)
    {
        printf("Nome do aluno %d: %s\n", i+1, vetAlunos[i].nome);
        printf("Matricula do aluno %d: %d\n", i+1, vetAlunos[i].matricula);
        printf("Curso do aluno %d: %s\n", i+1, vetAlunos[i].curso);
    }

    return 0;
}