#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void totalVendas(float vendas[][],char funcionario[][250]){
    float somaVendas,total;
    int i,c;

    for (i = 0; i < 5; i++)
    {
        printf("Vendedor: %s\n",funcionario[i]);
        while (vendas[i][c] > 0)
        {
            somaVendas += vendas[i][c];
            total = somaVendas;
        }
        printf("Venda Total: %f\n",total);   
    } 
}

struct ficha_pessoa
{
    char nome[250];
    char identificacao[250];
    char hrEntrada[250];
    char hrSaida[250];
};
int main(){
    struct ficha_pessoa pessoa[5];
    int i,c,opcao;
    float vendas[5][5];
    char funcionario[5][250];

    printf("BEM VINDO AO PROGRAMA!\n");
    printf("ESSE PROGRAMA SIMULA A INTERFACE DE UMA LOJA DE VENDAS!\n");
    printf("AGUARDE... O PROGRAMA INICIARA EM ALGUNS SEGUNDOS!\n");
    sleep(10);
    system("cls");

    for (i = 0; i < 5; i++)
    {
        printf("Digite o seu nome: ");
        scanf("%s",pessoa[i].nome);
        printf("Digite o seu ID de identificacao: ");
        scanf("%s",pessoa[i].identificacao);
        fflush(stdin);
        printf("Digite a sua hora de Entrada: ");
        gets(pessoa[i].hrEntrada);
    }
    system("cls");
    for (i = 0; i < 5; i++)
    {
        printf("Nome do vendedor: ");
        scanf("%s",&funcionario[i]);
        do
        {
            printf("Digite o valor da sua venda: ");
            scanf("%f",&vendas[i][c]);
        } while (vendas[i][c] != 0);   
    }
    for (i = 0; i < 5; i++)
    {
        printf("Digite a sua hora de Saida: ");
        gets(pessoa[i].hrSaida);
    }
    system("cls");
    do
    {
        printf("1 - Mostrar funcionarios: \n");
        printf("2 - Mostrar nomes e ID: \n");
        printf("3 - Mostrar nomes, Id e Hr de Entrada: \n");
        printf("4 - Mostrar nomes, Id, Hr de Entrada e Saida: \n");
        printf("5 - Mostrar vendedores e vendas totais: \n");
        printf("0 - Sair do programa\n");

        printf("Digite sua escolha: \n");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 1:
            for (i = 0; i < 5; i++)
            {
                printf("Nomes: %s\n",pessoa[i].nome);
            }
            break;
        case 2:
            for (i = 0; i < 5; i++)
            {
                printf("Nomes: %s\n",pessoa[i].nome);
                printf("ID's: %s\n",pessoa[i].identificacao);
            }
            break;
        case 3:
            for (i = 0; i < 5; i++)
            {
                printf("Nomes: %s\n",pessoa[i].nome);
                printf("ID's: %s\n",pessoa[i].identificacao);
                printf("HR's de Entrada: %s\n",pessoa[i].hrEntrada);
            }
            break;
        case 4:
            for (i = 0; i < 5; i++)
            {
                printf("Nomes: %s\n",pessoa[i].nome);
                printf("ID's: %s\n",pessoa[i].identificacao);
                printf("HR's de Entrada: %s\n",pessoa[i].hrEntrada);
                printf("HR's de Saida: %s\n",pessoa[i].hrSaida);
            }
            break;
        case 5:
            totalVendas(vendas,funcionario);
            break;
        case 0:
            printf("Saindo do Programa...Aguarde");
            break;     
        default:
            printf("Opcao incorreta - Retornando ao Menu Principal...");
            printf("Aguarde...");
            break;
        }
        sleep(5);
        system("cls");
    } while (opcao != 0);

    return 0;  
}
