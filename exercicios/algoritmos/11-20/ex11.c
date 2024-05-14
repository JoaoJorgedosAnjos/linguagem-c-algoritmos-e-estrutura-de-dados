// Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.
#include <stdio.h>

int main()
{
    int number1, number2;
    float number3, result1, result2, result3;
    printf("Digite dois números inteiros e um real: ");
    scanf("%d %d %f", &number1, &number2, &number3);
    result1 = (2 * number1) * (number2 / 2);
    result2 = (3 * number1) + number3;
    result3 = number3 * number3 * number3;
    printf("O produto do dobro do primeiro com metade do segundo é: %.2f\n", result1);
    printf("A soma do triplo do primeiro com o terceiro é: %.2f\n", result2);
    printf("O terceiro elevado ao cubo é: %.2f\n", result3);
    return 0;
}