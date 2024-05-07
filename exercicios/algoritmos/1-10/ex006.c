// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
#include <stdio.h>

int main()
{
    float circleRadius, areaCircle;
    printf("Digite o raio do círculo: ");
    scanf("%f", &circleRadius);
    areaCircle = circleRadius * circleRadius * 3.1415;
    printf("%f\n", areaCircle);
    return 0;
}
