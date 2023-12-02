#include <stdio.h>
#include <stdlib.h>

int main(){
    char bandas[3][250];
    char integrantes[3][5][500];
    int i,c;

    for (i = 0; i < 3; i++){
    
        printf("Digite o nome da %d banda: ",i + 1);
        gets(bandas[i]);
    

        for (c = 0; c < 5; c++)
        {
            printf("Digite o nome do %d integrante: ",c + 1);
            scanf("%s",&integrantes[i][c]);
            fflush(stdin);
        }   
    }
    for (i = 0; i < 3; i++)
    {
        printf("Banda: %s\n",bandas[i]);

        for (c = 0; c < 5; c++)
        {
            printf("Integrante: %s\n",integrantes[i][c]);
        }   
    }
    return 0;
}
