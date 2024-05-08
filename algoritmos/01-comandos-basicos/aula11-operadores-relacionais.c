#include <stdio.h>

int main()
{
    /*
    Igual a: ==
    Diferente de: !=
    Maior que: >
    Menor que: <
    Maior ou igual a: >=
    Menor ou igual a: <=
    */
    // Igual a (==)
    int a = 5;
    int b = 3;
    printf("%d\n", a == 4);     // falso 0
    printf("%d\n", a - 2 != b); // falso 0
    printf("%d\n", a != b);     // verdadeiro 1
    printf("%d\n", a = 4);      // atribuição e não comparação

    if (a == b)
    {
        printf("a é igual a b\n");
    }
    else
    {
        printf("a não é igual a b\n");
    }

    // Diferente de (!=)
    if (a != b)
    {
        printf("a é diferente de b\n");
    }
    else
    {
        printf("a não é diferente de b\n");
    }

    // Maior que (>)
    if (a > b)
    {
        printf("a é maior que b\n");
    }
    else
    {
        printf("a não é maior que b\n");
    }

    // Menor que (<)
    if (a < b)
    {
        printf("a é menor que b\n");
    }
    else
    {
        printf("a não é menor que b\n");
    }

    // Maior ou igual a (>=)
    if (a >= b)
    {
        printf("a é maior ou igual a b\n");
    }
    else
    {
        printf("a não é maior ou igual a b\n");
    }

    // Menor ou igual a (<=)
    if (a <= b)
    {
        printf("a é menor ou igual a b\n");
    }
    else
    {
        printf("a não é menor ou igual a b\n");
    }

    return 0;
}
