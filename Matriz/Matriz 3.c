#include <stdio.h>
#include <stdlib.h>

int main(){
    char disciplinas[3][100];
    int notas[3][2];
    int i,c,somaNotas,media[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome da disciplina: \n",i + 1);
        scanf("%s", &disciplinas[i]);
        for (c = 0; c < 2 ; c++)
        {
            printf("Digite a %d nota: \n",c + 1);
            scanf("%d", &notas[i][c]);
            somaNotas += notas[i][c];
        }
        media[i] = somaNotas/c;
        somaNotas = 0;   
    }
    system("cls");
    for (i = 0; i < 3; i++)
    {
         printf("Disciplina: %s\n",disciplinas[i]);
         for (c = 0; c < 2; c++)
         {
            printf("Nota: %d\n",notas[i][c]);
         }
         printf("Media: %d\n",media[i]);
         printf("\n");
         
    }
    
    return 0;
}
