/*8. Receber a altura do degrau de uma escada e a altura que o usuario deseja alcanc¸ar ´
subindo a escada. Calcular e mostrar quantos degraus o usuario dever ´ a subir para atingir ´
seu objetivo, sem se preocupar com a altura do usuario.*/

#include <stdio.h>
#include <stdlib.h>

double quantidade_degraus(double altura_degrau,double altura_desejada_usuario){
    if(altura_degrau > altura_desejada_usuario){
        printf("Não precisa subir nenhum degrau");
        }
    else{
    return altura_desejada_usuario/altura_degrau;
    }
}

int main(void){
    double degrau=0, desejo_user=0;
    printf("Entre a altura do degrau: ");
    scanf("%lf",&degrau);
    printf("\nEntre a altura desejada: ");
    scanf("%lf",&desejo_user);
    printf("A quantidade de degraus necessária para chegar na altura de %.2lf sera de %d degraus\n",desejo_user,(int)quantidade_degraus(degrau,desejo_user));
    return 0;
    }
    
