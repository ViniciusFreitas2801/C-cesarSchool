#include <stdio.h>
#include <string.h>

struct stContatos
    {
        char nome[100];
        int anoDeNascimento;
        char telefone[20];
        char email[100];
    };

struct stAgenda
{
    struct stContatos varContatos[100];
}varAgenda;


int main(void) {
    
    for (int i = 0; i < 2; i++)
    {
        printf("Digite o nome: ");
        fgets(varAgenda.varContatos[i].nome, 10, stdin);

        printf("Digite o ano de nascimento: ");
        scanf("%d", &varAgenda.varContatos[i].anoDeNascimento);
        getchar();

        printf("Digite o telefone: ");
        fgets(varAgenda.varContatos[i].telefone, 20, stdin);

        printf("Digite o email: ");
        fgets(varAgenda.varContatos[i].email, 100, stdin);
    }
printf("======== Agenda ========\n");
printf("\n");
    for (int i = 0; i < 2; i++)
    {
        printf("===== Contatos =====\n");
        printf("\n");
        printf("Nome: %s", varAgenda.varContatos[i].nome);
        printf("Ano de nascimento: %d", varAgenda.varContatos[i].anoDeNascimento);
        printf("Telefone: %s", varAgenda.varContatos[i].telefone);
        printf("Email: %s", varAgenda.varContatos[i].email);
    }
    

  return 0;
}