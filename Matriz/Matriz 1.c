#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int i, c;
    int notas[2][3];

    for (i = 0; i < 2; i++)
    {
        printf("Digite as notas do %d semestre:\n ",i + 1);

        for (c = 0; c < 3; c++)
        {
            printf("Digite a %d nota: \n",c + 1);
            scanf("%d", &notas[i][c]);
        }
        
    }
    for (i = 0; i < 2; i++)
    {
        printf("%dº semestre \n", i +1);
        for (c = 0; c < 3; c++)
        {
            printf("Notas: %d\n", notas[i][c]);
        }
        printf("\n");  
    }
    return 0;
}
