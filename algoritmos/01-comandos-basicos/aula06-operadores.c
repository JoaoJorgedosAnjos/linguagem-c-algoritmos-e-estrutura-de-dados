#include <stdio.h>

int main() {
    // Exemplos de operações aritméticas

    // Variáveis do tipo int
    int a = 10;
    int b = 5;
    int soma_int = a + b;
    int subtracao_int = a - b;
    int multiplicacao_int = a * b;
    int divisao_int = a / b; // Divisão inteira
    int resto_divisao_int = a % b;

    printf("Operações com int:\n");
    printf("Soma: %d\n", soma_int);
    printf("Subtração: %d\n", subtracao_int);
    printf("Multiplicação: %d\n", multiplicacao_int);
    printf("Divisão: %d\n", divisao_int);
    printf("Resto da divisão: %d\n", resto_divisao_int);

    // Variáveis do tipo float
    float c = 10.0;
    float d = 3.0;
    float soma_float = c + d;
    float subtracao_float = c - d;
    float multiplicacao_float = c * d;
    float divisao_float = c / d;

    printf("\nOperações com float:\n");
    printf("Soma: %.2f\n", soma_float); // Exibindo com 2 casas decimais
    printf("Subtração: %.2f\n", subtracao_float);
    printf("Multiplicação: %.2f\n", multiplicacao_float);
    printf("Divisão: %.2f\n", divisao_float);

    return 0;
}
