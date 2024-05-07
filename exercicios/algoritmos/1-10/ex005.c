//Faça um Programa que converta metros para centímetros.
#include <stdio.h>

int main()
{
    int numberInMeter,centimeters;
    printf("Digite a quantidade em metros: ");
    scanf("%d", &numberInMeter);
    centimeters = numberInMeter * 100;
    printf("%d metro(s) equivale a %d centiímetros\n", numberInMeter, centimeters);
    return 0;
}