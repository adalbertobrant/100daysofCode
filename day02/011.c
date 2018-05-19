/* 11. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite
o numero de dias trabalhados pelo encanador e imprima a quantia lıquida que devera´
ser paga, sabendo-se que sao descontados 8% para imposto de renda. */

#include <stdio.h>
#include <stdlib.h>

#define sal 30.00
#define imposto 0.08

double sal_liquido(int dias){
    double salario=0;
    salario = dias * sal - dias*sal*imposto;
    return salario;
 }
 
 int main(void){
     int dias;
     printf("Entre a quantidade de dias trabalhados\n");
     scanf("%d",&dias);
     printf("O salario liquido é de %.2lf\n",sal_liquido(dias));
     return 0;
}
