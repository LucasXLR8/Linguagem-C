#include <stdio.h>
#include <stdlib.h>

void menorNumero(int n1,int n2){
    int menor;
    if (n1 < n2)
    {
        menor = n1;
    }else{
        menor = n2;
    }
    printf("Menor: %d\n",menor);
    
}
int main(){
    int primeiroNumero,segundoNumero;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero: \n");
    scanf("%d", &segundoNumero);

    menorNumero(primeiroNumero,segundoNumero);

    return 0;
}
