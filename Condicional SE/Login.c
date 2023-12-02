#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nomeSalvo[50] = "Aluno", senhaSalva[50] = "Caderno";
    char login[50], senha[50];

    printf("Digite seu login: ");
    gets(login);

    fflush(stdin);

    printf("Digite sua senha: ");
    gets(senha);

    if (strcmp(login, nomeSalvo)== 0 && strcmp(senha, senhaSalva)== 0){
        printf("Acesso liberado.");
    }else{
        printf("Acesso negado.");
    }
    return 0;
}