#include <stdio.h>
#define PI 3.1415 //outra forma de definir constante #define nomeDaVariavel valor
int main()
{
    const int number = 1;
    int sum = number + 1;
    printf("Constante %d\nValor soma %d\n", number, sum);
    //number = 12;
    float f = PI + 1;
    printf("PI = %f\n", PI);
    return 0;
}