/* 9. Ler o valor do raio de um círculo e calcular a area do círculo correspond$
círculo e´ π ∗ raio^2 , considere π = 3.141592 */

#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592

double area_circulo(double raio){
    return pi*raio*raio;
}
int main(void){
    double raio_circulo=0;
    printf("Entre o raio do circulo\n");
    scanf("%lf",&raio_circulo);
    printf("A area cujo raio do circulo eh %.2lf eh igual a %lf\n",raio_circulo$
    return 0;
    }

    
