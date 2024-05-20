#include <stdio.h>

/*
Operador ?:

é tipicament utilizado para fazer a atribuições condicionais
Forma geral:
variavel = condicao ? expressao1 : expressao2
caso a condicao seja verdadeira = expressao1
se for falsa = expressao2
*/
int main()
{
    int x, y, z;
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);

    z = x > y ? x : y;

    printf("Maior = %d\n", z);
    (x > y) ? printf("X é maior.\n") : printf("Y é maior.\n");
    return 0;
}