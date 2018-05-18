# Ler um numero e retorne seu antecessor e seu sucessor

#include <stdio.h>
#include <stdlib.h>

int antecessor (int numero){
 return numero -1;
 }
int sucessor (int numero){
return numero +1;
}
int main(void){
   int numero =0;
   printf("Entre um numero \n");
   scanf("%d",&numero);
   printf("O antecessor do numero %d eh %d e o sucessor eh %d\n",numero, antecessor(numero),sucessor(numero));
   
   return 0;
}
