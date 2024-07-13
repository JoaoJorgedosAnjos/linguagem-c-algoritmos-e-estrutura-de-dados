/*Exercicio 012
Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58*/
#include <stdio.h>

int main()
{
    printf("Digite sua altura em cm: \n");
    float height, idealWeight;
    scanf("%f", &height);
    height = height / 100;
    idealWeight = (72.7 * height) - 58;
    printf("Seu peso ideal é %.2f kg\n", idealWeight);
    return 0;
}