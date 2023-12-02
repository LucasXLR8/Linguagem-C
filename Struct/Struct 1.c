#include <stdio.h>
#include <stdlib.h>

struct ficha_pessoa
{
    char nome[100];
    int idade;
    float peso,altura;
};
int main(){
    struct ficha_pessoa pessoa;

        printf("Digite seu nome: ");
        gets(pessoa.nome);

        printf("Digite sua idade: ");
        scanf("%d",&pessoa.idade);

        printf("Digite seu peso: ");
        scanf("%f",&pessoa.peso);

        printf("Digite sua altura: ");
        scanf("%f",&pessoa.altura);

        printf("Nome: %s\n",pessoa.nome);
        printf("Idade: %1.d\n",pessoa.idade);
        printf("Peso: %1.f\n",pessoa.peso);
        printf("Altura: %.2f\n",pessoa.altura);

        return 0;   
}
