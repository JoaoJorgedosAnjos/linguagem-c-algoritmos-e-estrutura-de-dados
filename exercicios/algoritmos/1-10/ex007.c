//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.
#include <stdio.h>

int main()
{
    float squareSide, squareArea;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &squareSide);
    squareArea = squareSide * squareSide;
    squareArea = 2 * squareArea;
    printf("O dobro da área do quadrado é: %f\n", squareArea);
    return 0;
}