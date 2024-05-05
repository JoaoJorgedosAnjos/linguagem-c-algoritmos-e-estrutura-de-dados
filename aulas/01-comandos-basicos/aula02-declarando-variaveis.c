#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra = 'a';
    char numero = 0;
    int number = 10;
    float n = 5.25;
    double d = 5.0e3; //5*10^3 

    printf( "Letra: %c\n", letra );
    printf( "Numero: %d\n", numero );
    printf( "Number: %d\n", number );
    printf( "n: %f\n", n );
    printf( "d: %f\n", d );

    getchar();
    return 0;
}
