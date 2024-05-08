#include <stdio.h>
int main()
{
    int x, y, z;
    x = y = z = 10;
    /*
    z recebe 10 ou 10 é atribuido a z
    y recebe o valor de z
    x recebe o valor de y
    */
    float f1= 5.25;
    x = f1;
    /*
    x por ser inteiro vai receber apenas a parte inteira de f1, o restante vai ser descartado
    */

    return 0;
}