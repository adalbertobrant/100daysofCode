/* 10. A importancia de R$ 780.000,00 sera dividida entre tres ganhadores de um concurso. ˆ
Sendo que da quantia total:
• O primeiro ganhador recebera 46%; ´
• O segundo recebera 32%; ´
• O terceiro recebera o restante; ´
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

#include <stdio.h>
#include <stdlib.h>

#define premio 780000

int main(void){
    printf("Primeiro ganhador ganhou 46%% = R$ %.2lf\n",(46.0/100.0)*premio);
    printf("Segundo ganhador ganhou 32%% = R$ %.2lf\n",(32.0/100.0)*premio);
    printf("Terceiro ganhandor ganhou o restante = R$ %.2lf\n",(46.0/100.0)*premio - (32.0/100.0)*premio);
    return 0;
}

