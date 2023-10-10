#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    //Declaracao de variavel
    int N;

    //Input numero de execucoes
    scanf("%d", &N);
    getchar();
    
    //Laco de repeticao
    while (N--) {
        
        char texto[201]; //200 caracteres limite + NULL
        fgets(texto, 201, stdin); //Input texto

        int maiorLetra[26] = {0}; //Array letras
        int maior = 0;
        
        for (int i = 0; texto[i]; i++) 
        {
            char letra = tolower(texto[i]); //Transforma tudo em minusculo
            if (isalpha(letra)) //Confere se o caracter eh uma letra do alfabeto
            {
                //Maior quant de letra
                maiorLetra[letra - 'a']++;
                if (maiorLetra[letra - 'a'] > maior) 
                {
                    maior = maiorLetra[letra - 'a'];
                }
            }
        }
        
        //Output
        for (int i = 0; i < 26; i++) 
        {
            if (maiorLetra[i] == maior) 
            {
                printf("%c", 'a' + i);
            }
        }
        
        printf("\n");
    }
    
    return 0;
}