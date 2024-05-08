#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    // E lógico (&&)
    if (a < b && b < c) {
        printf("A condição a < b && b < c é verdadeira\n");
    } else {
        printf("A condição a < b && b < c é falsa\n");
    }

    // OU lógico (||)
    if (a < b || b > c) {
        printf("A condição a < b || b > c é verdadeira\n");
    } else {
        printf("A condição a < b || b > c é falsa\n");
    }

    // NÃO lógico (!)
    if (!(a == b)) {
        printf("A condição !(a == b) é verdadeira\n");
    } else {
        printf("A condição !(a == b) é falsa\n");
    }

    return 0;
}
