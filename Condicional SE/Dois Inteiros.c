#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2;
    float media,soma,multiplicacao;

    printf("Digite o primeiro numero: ");
    scanf("%i",&n1);
    printf("Digite o segundo numero: ");
    scanf("%i",&n2);

    media = (n1 + n2)/2;
    soma = n1 + n2;
    multiplicacao = n1 * n2;

    if(n1 > n2){
       printf("Maior: %i\n",n1);
       printf("Menor: %i\n",n2); 
    }else{
        printf("Maior: %i\n",n2);
        printf("Menor: %i\n",n1);
    }
    printf("Media: %1.f\n",media);
    printf("Soma: %1.f\n",soma);
    printf("multiplicacao: %1.f\n",multiplicacao);

    return 0;

}
