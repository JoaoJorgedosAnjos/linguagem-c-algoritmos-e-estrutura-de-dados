//Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].
#include <stdio.h>

int main()
{
    int number;
    printf("Digite um número: ");
    scanf("%d", &number);
    printf("O númer digitado foi: %d\n", number);
    return 0;
}