#include <stdio.h>
/* O comando do-while:
permite executar, repetidamente e
AO MENOS UMA VEZ, um conjunto de
comandos de acordo com uma condição

do {
    conjunto de comandos;
} while(condição);

system("pause");
return 0;
*/
int main()
{
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    do
    {
        printf("%d\n", a);
    } while (a < b);
    printf("Fim do programa \n");

    return 0;
}