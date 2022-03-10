#include<stdio.h>
#include<string.h>

int main(void)
{
    char palavra[60];
    char palavracheck[60];

    printf("Digite a palavra para saber se é um palindromo: ");
    scanf("%s", &palavra);

    strrev(palavra);
    strcpy(palavracheck, palavra);
    strrev(palavra);

    if(!strcmp(palavra, palavracheck)){
        printf("É um palindromo\n");
    }else{
        printf("Não é um palindromo\n");
    }

    return 0;
}