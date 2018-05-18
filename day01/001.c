## Efetuar a leitura de um numero real e apresentar o resultado do quadrado desse numero

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float numero_real=0,resultado=0;
    printf("Entre um numero real: ");
    # Usa o fscanf para ler a partir do teclado
    fscanf(stdin,"%f",&numero_real);
    resultado = numero_real*numero_real;
    printf("Resultado do quadrado do numero %.2f eh = %.2f\n",numero_real,resultado); 
    
  
return 0;
}
