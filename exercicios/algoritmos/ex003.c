//Faça um Programa que peça dois números e imprima a soma.
#include <stdio.h>

int main()
{
    int number1, number2, sum;  
    printf("Digite o número 1 e o número 2:");
    scanf("%d %d", &number1, &number2);
    sum = number1 + number2;
    printf("%d + %d = %d\n", number1, number2, sum);
}