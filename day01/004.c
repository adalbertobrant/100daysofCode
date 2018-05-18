//  Ler o tamanho do lado de um quadrado e imprimir sua area.

#include <stdio.h>
#include <stdlib.h>

int area_quadrado(int tamanho_quadrado){
return tamanho_quadrado * tamanho_quadrado;
}
int main(void){

    int tamanho_quadrado =0;
    printf("Entre o tamanho do lado do quadarado\n");
    scanf("%d",& tamanho_quadrado);
    printf("A area do quadrado de lado %d eh %d \n", tamanho_quadrado,area_quadrado(tamanho_quadrado));
    
    return 0;
}
