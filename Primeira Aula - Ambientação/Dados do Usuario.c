#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    float peso;
    char nome[10];

    printf("Digite seu nome: ");
    gets(nome);

    fflush(stdin);

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite seu peso: ");
    scanf("%f",&peso);

    system("cls");

    printf("Nome: %s \n",nome);
    printf("Idade: %d \n",idade);
    printf("Peso: %f \n",peso);

    system("pause");

    return 0;
}
