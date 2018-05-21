#include <stdio.h>
#include <stdlib.h>

int Invert_num(int numero){
    int total=0;
    int aux_centena = numero/100;
//    printf("aux_centena %d\n",aux_centena);
    int aux_dezena = (numero %100)/10;
//    printf("dezena = %d\n",aux_dezena);
    int aux_unidade = ((numero%100)%10) ;
//    printf("unidade = %d\n",aux_unidade);
    aux_unidade = 100* aux_unidade;
    aux_dezena = aux_dezena *10;
    aux_centena = aux_centena*1;
    total = aux_unidade+aux_dezena+aux_centena;
    return total;   
}

int main(void){

   int numero = 0;
   printf("Entre um numero de ate 3 digitos\nPara ser invertido!\n");
   scanf("%d",&numero);
   printf("O inverso do numero %d eh %d \n",numero,Invert_num(numero));
   return 0;
}

