#include <stdio.h>

int main()
{
    int x = 10, y = 10;
    x--; // x = x - 1;
    --y; // y = y - 1;
    printf("x = %d\ny = %d\n", x, y);
    x = 10, y = 10;
    x = y++; // pos incremento
    /*
    primeiro faz a atribuiçao e depois o incremento
    w recebe z
    z++
    */
    printf("Pós-incremento\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    /*
    printf x = 10, pois x recebeu o valor de x
    y = 11, pois depois que x recebeu o valor de y, y recebeu y +1
    */
    x = 10, y = 10;
    x = ++y;
    /*
    pre incremento, y vai receber y + 1, antes de x receber o valor de y
    logo x vai ter o mesmo valor que y + 1
    */
    printf("Pre-incremento\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    /* Pos e pre incremento podem ser usado tanto com ++ quanto --*/
    return 0;
}
