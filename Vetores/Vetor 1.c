#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, notas[3];
    float media;

    for (i = 0; i < 3; i++)
    {
        printf("Digite a %d nota: \n", i + 1);
        scanf("%d", &notas[i]);

    }
    media = (notas[0] + notas[1] + notas[2])/3;

for (i = 0; i < 3; i++)
{
    printf("Nota %d: \n ",notas[i]);
}
    printf("Media %.1f: \n ",media);
    
    

    return 0;
}
