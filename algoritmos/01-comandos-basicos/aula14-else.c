#include <stdio.h>

int main() {
    int y = 3;

    if (y < 5) {
        printf("y é menor que 5.\n");
        y *= 2;
        printf("O novo valor de y é %d.\n", y);
    } else {
        printf("y não é menor que 5.\n");
    }

    printf("Este é um exemplo de if com {}.\n");

    return 0;
}
