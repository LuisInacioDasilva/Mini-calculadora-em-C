#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
float numero1, numero2, resultado;
int contador,opcao;

printf("\nDigite o primeiro n�mero: ");
scanf("%f", &numero1);
printf("\nDigite o segundo n�mero: ");
scanf("%f", &numero2);

contador = 1;
while(contador <10){
    printf("\nDigite 1 para Soma.");
    printf("\nDigite 2 para Subtrac�o.");
    printf("\nDigite 3 para Multiplicac�o.");
    printf("\nDigite 4 para Divis�o.");
    printf("\nDigite 5 para Comparar os n�meros.");
    printf("\nDigite 6 para finalizar o programa.");
    printf("\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        resultado = numero1 + numero2;
            printf("\nA soma dos dois n�meros �: %f",resultado);
            break;

    case 2:
        resultado = numero1 - numero2;
            printf("\nA subtrac�o dos dois n�meros �: %f",resultado);
            break;
    case 3:
        resultado = numero1 * numero2;
            printf("\nA multiplicac�o dos dois n�meros �: %f", resultado);
            break;
    case 4:
        resultado = numero1 / numero2;
            printf("\nA divis�o dos dois n�mero �: %f", resultado);
            break;
    case 5:
        if (numero1 == numero2){
            printf("\nOs n�meros s�o iguais");
        }
        if (numero1 > numero2){
            printf("\nO n�mero %f e maior que o n�mero %f",numero1, numero2);
        }
        if (numero1 < numero2){
            printf("\nO n�mero %f � maior que o n�mero %f", numero2,numero1);
        }
        break;
    case 6:
        contador = contador + 11;
            printf("\nPrograma finalizado.");
            break;
    }

}
return(0);
}
