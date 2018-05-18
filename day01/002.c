# Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Fahrenheit. ´
# A formula de conversão é: ´ F = C ∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
# e C a temperatura em Celsius.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float temperatura_celsius = 0, temperatura_fahrenheit=0;
    printf ("Entre uma temperatura em graus Celsius \n");
    scanf("%f",&temperatura_celsius);
    temperatura_fahrenheit = temperatura_celsius * (9.0/5.0) +32.0;
    printf("A temperatura em graus Celsius eh %.2f e em Fahrenheit eh %.2f \n", temperatura_celsius, temperatura_fahrenheit);

return 0;
}
