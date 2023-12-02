#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, notas[4];
    float media;

    for (i = 0; i < 4; i++)
    {
        printf("Digite a %d nota: \n",i + 1);
        scanf("%d", &notas[i]);
    }
    media = (notas[0] + notas[1] + notas[2] + notas[3])/4

    if (media >= 7){
        printf("Aprovado");
    }else if (media >= 5){
        printf("Recuperaçao");
    }else{
        printf("Reprovado"); 
    }
    for (i = 0; i < 4; i++)
    {
        printf("Nota %d: \n",notas[i]);
    }
        printf("Media %.1f: \n",media);
    
    
    return 0;
}
