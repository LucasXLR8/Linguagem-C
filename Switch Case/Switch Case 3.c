#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int dia;

    do
    {
        printf("Digite um numero para o dia da semana: ");
        scanf("%d",&dia);

        switch (dia)
        {
        case 7:
        case 1:
            printf("Final de semana");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia util");
            break;
        default:
            printf("Dia invalido");        
        }

        sleep(5);
        system("cls");
    } while (dia != 0);

    return 0; 
}
