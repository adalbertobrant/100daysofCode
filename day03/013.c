/* 13. Converta uma letra maiuscula em letra minuscula. Use a tabela ´ ASCII. */ 

#include <stdio.h>
#include <stdlib.h>

#define constante 32

char Converter (char letra){
    int aux=0;
    aux = letra;
    return (char)(aux+constante);
}
int main(void){
   
  char letra;
   printf("Entre uma letra para retornar sua minuscula\n");
   scanf("%c",&letra);
   printf("A letra minuscula eh %c\n",Converter(letra));

return 0;
}

