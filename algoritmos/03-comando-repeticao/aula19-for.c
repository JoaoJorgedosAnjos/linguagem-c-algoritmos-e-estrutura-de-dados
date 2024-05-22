#include <stdio.h>
/*
for(inicializacao; condição; incremento)
{
    conjunto de comandos;
}
*/
int main()
{
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        printf("%d\n", i);
    }
    printf("Fim do exemplo 1\n");
    // Exemplo dois
    int j, k;
    for (j = 0, k = 10; j < k; j++, k--)
    {
        printf("j = %d e k = %d \n", j, k);
    }
    printf("Fim do exemplo 2\n");
    return 0;
}
