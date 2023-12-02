#include <stdio.h>
#include <stdlib.h>

struct ficha_pessoa
{
    char nome[100];
    int idade;
    char endereco[250];
};
int main(){
    struct ficha_pessoa pessoa;

    printf("Digite seu endereco: ");
    gets(pessoa.endereco);

    printf("Digite seu nome: ");
    scanf("%s",&pessoa.nome);

    printf("Digite sua idade: ");
    scanf("%d",&pessoa.idade);
    system("cls");

    printf("Nome: %s\n",pessoa.nome);
    printf("Idade: %d\n",pessoa.idade);
    printf("Endereco: %s\n",pessoa.endereco);

    return 0;
}
