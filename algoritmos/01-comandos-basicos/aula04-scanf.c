#include <stdio.h>

int main()
{
    /*
    char letter = 'a';
    int number1;
    float number2;
    double number3;

    // para ler um variável precisa do &nomeDaVariavel
    scanf("%c", &letter); // %c = char
    scanf("%d", &number1); // %d = int
    scanf("%f", &number2); // %f = float
    scanf("%lf", &number3); // %lf = double */
    /* exemplo 01
    int number;
    printf("Digite um número:");
    scanf("%d", &number);
    printf("O número digitado foi: %d\n", number);
    */
    //exemplo 02
    int number1;
    float number2;
    printf("Digite dois números: ");
    scanf("%d %f", &number1, &number2);
    printf("O número 1 é: %d\n", number1);
    printf("O número 2 é: %f\n", number2);
    printf("Numeros: %d e %f\n", number1, number2);
    return 0;

}