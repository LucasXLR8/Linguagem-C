#include <stdio.h>
#include <stdlib.h>

void tabuadaSoma(int n1){
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("%d + %d = %d\n",n1,i,n1 + i);
    }   
}
void tabuadaSubtracao(int n1){
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("%d - %d = %d\n",n1,i,n1 - i);
    }   
}
void tabuadaMultiplicacao(int n1){
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d\n",n1,i,n1 * i);
    }  
}
int main(){
    int numero;

    printf("Digite um numero para somar,subtrair ou multiplicar: ");
    scanf("%d",&numero);
    system("cls");

    tabuadaSoma(numero);
    tabuadaSubtracao(numero);
    tabuadaMultiplicacao(numero);
    return 0;
}
