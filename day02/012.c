/* 12. Sejam a e b os catetos de um triangulo onde a hipotenusa é obtida pela equação: ˜
hipotenusa =$\sqrt{a²+b²}$
Fac¸a um programa que entre com os valores de a e b, e ache o valor da hipotenusa
atraves da fórmula. Imprima o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hipotenusa(double cateto_01, double cateto_02){
     double result =  cateto_01*cateto_01 + cateto_02*cateto_02;
     return sqrt(result);
}

int main(void){
    double a=0,b=0;
    printf("Entre os catetos a e b: ");
    scanf("%lf%lf",&a,&b);
    printf("A hipotenusa eh %.3lf\n",hipotenusa(a,b));
    return 0;
}
