#include <stdio.h>
#include <stdlib.h>

struct ficha_pessoa
{
    char nome[100];
    char autor[100];
    char categoria[100];
    float preco;
};
int main(){
    struct ficha_pessoa pessoa[3];
    int i;

for (i = 0; i < 3; i++)
{
    printf("Digite o nome do livro: ");
    scanf("%s",&pessoa[i].nome);

    printf("Digite o nome do autor: ");
    scanf("%s",&pessoa[i].autor);

    printf("Digite a categoria do livro: ");
    scanf("%s",&pessoa[i].categoria);

    printf("Digite o valor do livro: ");
    scanf("%f",&pessoa[i].preco);
}
system("cls");

for (i = 0; i < 3; i++)
{
    printf("Livro %d:\n",i + 1);
    printf("Nome: %s\n",pessoa[i].nome);
    printf("Autor: %s\n",pessoa[i].autor);
    printf("Categoria: %s\n",pessoa[i].categoria);
    printf("Preco: %.2sf\n",pessoa[i].preco);
}
return 0;   
}
