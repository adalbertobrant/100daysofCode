/* Receber o salario de um funcionário, calcular e mostrar seu novo salário, sabendo que ´
ele recebeu um aumento de 25% */

#include <stdio.h>
#include <stdlib.h>

double aumento(double salario){
    double novo_salario = salario*25/100 + salario;
    return novo_salario;
    }
int main(void){

    double salario;
    printf("Entre o salario do funcionario: ");
    scanf("%lf",&salario);
    printf("O novo salario eh %.3lf devido ao aumento de 25%%\n",aumento(salario));
    return 0;
}
