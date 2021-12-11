#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
float numero1, numero2, resultado;
int contador,opcao;

printf("\nDigite o primeiro número: ");
scanf("%f", &numero1);
printf("\nDigite o segundo número: ");
scanf("%f", &numero2);

contador = 1;
while(contador <10){
    printf("\nDigite 1 para Soma.");
    printf("\nDigite 2 para Subtracão.");
    printf("\nDigite 3 para Multiplicacão.");
    printf("\nDigite 4 para Divisão.");
    printf("\nDigite 5 para Comparar os números.");
    printf("\nDigite 6 para finalizar o programa.");
    printf("\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        resultado = numero1 + numero2;
            printf("\nA soma dos dois números é: %f",resultado);
            break;

    case 2:
        resultado = numero1 - numero2;
            printf("\nA subtracão dos dois números é: %f",resultado);
            break;
    case 3:
        resultado = numero1 * numero2;
            printf("\nA multiplicacão dos dois números é: %f", resultado);
            break;
    case 4:
        resultado = numero1 / numero2;
            printf("\nA divisão dos dois número é: %f", resultado);
            break;
    case 5:
        if (numero1 == numero2){
            printf("\nOs números são iguais");
        }
        if (numero1 > numero2){
            printf("\nO número %f e maior que o número %f",numero1, numero2);
        }
        if (numero1 < numero2){
            printf("\nO número %f é maior que o número %f", numero2,numero1);
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
