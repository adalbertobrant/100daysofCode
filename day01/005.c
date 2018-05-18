/* 
Efetuar a leitura de tres valores e apresentar como resultado final a soma dos quadrados ˆ
dos tres valores lidos.
*/

#include <stdio.h>
#include <stdlib.h>

int soma_quadrados(int valor1,int valor2,int valor3){
    int soma = valor1*valor1 + valor2*valor2 + valor3*valor3 ;
    return soma;
}

int main(void){

    int valor_01=0, valor_02=0,valor_03=0;
    printf("Entre tres valores: ");
    scanf("%d%d%d",&valor_01,&valor_02,&valor_03);
    printf(" A soma dos qudrados dos valores eh %d \n",soma_quadrados(valor_01,valor_02,valor_03));
    return 0;
}
