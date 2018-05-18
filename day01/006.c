# Ler quatro notas e calcular a media aritmética obtida.

#include <stdio.h>
#include <stdlib.h>

float media_aritmetica(float nota1,float nota2,float nota3,float nota4){
    float media = (nota1+nota2+nota3+nota4)/4;
    return media;
}

int main(void){
    float nota1=0,nota2=0,nota3=0,nota4=0;
    printf("Entre as quatro notas: ");
    scanf("%f%f%f%f",&nota1,&nota2,&nota3,&nota4);
    printf("A media encontrada das notas foi %.3f\n",media_aritmetica(nota1,nota2,nota3,nota4));
    return 0;
    }
    
