/*
Aninhamento de repetições
    Trata-se do uso de um comando de repetição
    (while, for ou do-while) dentro do outro.
    Exemplo:
    repetição(condição1){
        conjunto de comandos;
        repetição(condição2){
            conjunto de comandos;
            repetição...
*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    int i, j;
    i = 1;
    while (i < 5)
    {
        j = 1;
        while (j < 5)
        {
            if (i == j)
                printf("1 ");
            else
                printf("0 ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}