#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,c,media[2],somaNotas;
    int notas[2][3];

    for (i = 0; i < 2; i++)
    {
        printf("Digite as notas do %d semestre:\n",i + 1);
        for (c = 0; c < 3; c++)
        {
            printf("Digite a %d nota: \n",c + 1);
            scanf("%d", &notas[i][c]);
            somaNotas += notas[i][c];
        }
        media[i] = somaNotas/c;
        somaNotas = 0;
    }

    for (i = 0; i < 2; i++)
    {
        printf("%d semestre \n",i + 1);
        for (c = 0; c < 3; c++)
        {
            printf("Notas: %d\n",notas[i][c]);
        }
        printf("Media: %d\n",media[i]);
         printf("\n"); 
    }
    
    return 0;
}
