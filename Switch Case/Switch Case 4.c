#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    float detergente = 1.59;
    float esponja = 4.59;
    float ladeaco = 1.79;
    float soma1,soma2,soma3,total;
    int opcao;

    printf("Digite a quantidade de detergentes: \n");
    scanf("%f",&detergente);
    printf("Digite a quantidade de esponjas: \n");
    scanf("%f",&esponja);
    printf("Digite a quantidade de la de aco: \n");
    scanf("%f",&ladeaco);
    system("cls");

    do
    {
        printf("100 - Mostre o valor total de detergentes: \n");
        printf("101 - Mostrar o valor total de esponjas: \n");
        printf("102 - Mostrar o valor total de la de aco: \n");
        printf("1 - Mostrar o valor total dos produtos: \n");
        printf("0 - Sair do programa\n");

        printf("Digite sua opcao: ");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 100:
            soma1 = detergente * 1.59;
            printf("Total: %.2f\n",soma1);
            break;
        case 101:
            soma2 = esponja * 4.59;
            printf("Total: %.2f\n",soma2);
            break;
        case 102:
            soma3 = ladeaco * 1.79;
            printf("Total: %.2f\n",soma3);
            break;
        case 1:
            total = soma1 + soma2 + soma3;
            printf("Total geral: %.2f\n",total);
            break;        
        default:
            printf("Opcao incorreta - Retornando ao Menu Principal\n");
            printf("Aguarde...");
            break;
        }
        sleep(5);
        system("cls");
    } while (opcao != 0);

    return 0;
}
