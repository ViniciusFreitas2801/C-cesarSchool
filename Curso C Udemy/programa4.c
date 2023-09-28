/*
#include <stdio.h>
#include <string.h>

union unTimeLoud
{
    char jogadores[200];
    int titulos;
};

int main(void) {
    
    union unTimeLoud varTimeLoud;

    printf("A variavel esta ocupando %ld bytes", sizeof(varTimeLoud));

  return 0;
}

*/

/*
#include <stdio.h>
#include <string.h>

union unPessoa
{
  char nome[100];
};

int main(){

  union unPessoa varPessoa;

  strcpy(varPessoa.nome, "Vinicius Freitas");

  printf("A varPessoa eh ---> %s", varPessoa.nome);
  return 0;
}
*/

#include <stdio.h>
#include <string.h>

union unCesarAlunos
{
  char nomeAluno1[50];
};

int main()
{
  union unCesarAlunos varCesarAlunos;

  strcpy(varCesarAlunos.nomeAluno1, "Sofia Valadares");

  printf("A variavel do tipo char esta ocupando %ld bytes na memoria", sizeof(varCesarAlunos));

  return 0;
}





























