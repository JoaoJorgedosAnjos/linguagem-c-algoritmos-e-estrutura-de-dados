#include <stdio.h>
/*
o comando switch permite fazer seleções múltiplas com base no valor de uma variável do tipo int ou char
Forma geral
    switch(variável){
        case valor1: conjunto de comandos; break;
        case valor2: conjunto de comandos; break;
        case valorN: conjunto de comandos; break;
        default: conjunto de comandos;
     }
*/
int main()
{
    char ch;
    printf("Digite um simbolo de pontuacao: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case ',':
        printf("Virgula. \n");
        break;
    case '.':
        printf("Ponto. \n");
        break;
    case ':':
        printf("Dois pontos. \n");
        break;
    case ';':
        printf("Ponto e virgula. \n");
        break;
    default:
        printf("Nao eh pontuacao. \n");
    }
    return 0;
}