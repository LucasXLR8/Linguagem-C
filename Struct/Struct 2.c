#include <stdio.h>
#include <stdlib.h>

struct ficha_pessoa
{
    char nome[500];
    int idade;
    float peso;
    float altura;
};
int main(){
    struct ficha_pessoa pessoa[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite seu Nome: ");
        scanf("%s",&pessoa[i].nome);

        printf("Digite sua idade: ");
        scanf("%d",&pessoa[i].idade);

        printf("Digite seu peso: ");
        scanf("%f",&pessoa[i].peso);

        printf("Digite sua altura: ");
        scanf("%f",&pessoa[i].altura);
    }
    system("cls");

    for (i = 0; i < 5; i++)
    {
        printf("Pessoa %d\n",i + 1);
        printf("Nome: %s\n",pessoa[i].nome);
        printf("Idade: %1.d\n",pessoa[i].idade);
        printf("Peso: %1.f\n",pessoa[i].peso);
        printf("Altura: %.2f\n",pessoa[i].altura);
    }
    return 0;
}
