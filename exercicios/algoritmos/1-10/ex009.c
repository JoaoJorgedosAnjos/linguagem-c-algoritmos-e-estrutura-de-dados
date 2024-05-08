// Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).
#include <stdio.h>

int main()
{
    int farenheit, celsius;
    printf("Digite o valor da temperatura em Farenheit: ");
    scanf("%d", &farenheit);
    celsius = (5 * ( farenheit - 32) / 9);
    printf("O valor em Celsius é %d\n", celsius);
}