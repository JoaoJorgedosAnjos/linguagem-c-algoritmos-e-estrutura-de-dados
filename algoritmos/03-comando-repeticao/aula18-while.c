#include <stdio.h>
// o comando while: repete
// repetidamente, um conjunto
// de comandos de acordo com uma condição
/*
while(condição) {
    conjunto de comandos
    }
*/
int main()
{
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    while (a < b)
    {
        a++;
        printf("%d\n", a);
    }
    printf("Fim do programa\n");
    return 0;
}