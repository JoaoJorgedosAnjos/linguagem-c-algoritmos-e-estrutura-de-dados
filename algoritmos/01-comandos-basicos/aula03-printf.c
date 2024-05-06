#include <stdio.h>

int main()
    {
        char letter = 'a';
        int number = 10;
        float decimal = 5.25;
        printf("%c\n", letter);//%c char
        printf("%d\n", letter);//%d valor numero dentro da tabela ascii
        printf("%d\n", number);//%d int
        printf("%f\n", decimal);//%f real

        printf("Letra %c, inteiro %d, real %f\n", letter, number, decimal);
        printf("Número: %d; número + 1: %d\n", number, number + 1);
        return 0;
    }   