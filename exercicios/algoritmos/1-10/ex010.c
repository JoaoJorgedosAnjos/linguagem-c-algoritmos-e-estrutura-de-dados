// Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.
#include <stdio.h>

int main()
{
    int farenheit, celsius;
    printf("Digite o valor da temperatura em Celsius: ");
    scanf("%d", &celsius);
    farenheit = ((9 * celsius) / 5) + 32;
    printf("O valor em Farenheit é %d\n", farenheit);
}