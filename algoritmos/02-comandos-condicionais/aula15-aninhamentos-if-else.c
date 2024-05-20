#include <stdio.h>
/*
int main()
{
    if(condicao1)
        {
            if(condicao2)
            {
                Primeiro conjunto de comandos
            }else
            {
                Segundo conjunto de comandos
            }
        }else{
            Terceiro conjunto de comandos
        }
    return 0;
}
    */
int main () {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("O numero e igual a 0. \n");
    } else {
        if (num > 0) {
            printf("O numero e maior do que 0. \n");
        } else {
            printf("O numero e menor do que 0. \n");
        }
    }

    system("pause");//não funciona no mac
    return 0;
}