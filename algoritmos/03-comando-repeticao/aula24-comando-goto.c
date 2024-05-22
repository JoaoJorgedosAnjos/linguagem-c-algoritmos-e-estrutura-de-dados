/*
goto = go to
O comando goto em C é um comando de salto, também referido como um salto incondicional1. Ele pode ser usado para pular de qualquer lugar para qualquer lugar dentro de uma função1. Aqui está a sintaxe básica:

goto label;
...
label:

Nesta sintaxe, label é um identificador definido pelo usuário que indica a instrução alvo1. A instrução imediatamente após label: é a instrução de destino1. O label: pode também aparecer antes da instrução goto label;1.

Aqui está um exemplo de como o goto pode ser usado em C:

#include <stdio.h>

void checkEvenOrNot(int num) {
    if (num % 2 == 0)
        goto even;
    else
        goto odd;

    even:
        printf("%d is even", num);
        return;

    odd:
        printf("%d is odd", num);
}

int main() {
    int num = 26;
    checkEvenOrNot(num);
    return 0;
}

Neste exemplo, se o número for par, o controle vai para o rótulo even, caso contrário, vai para o rótulo odd1.

No entanto, o uso do comando goto é geralmente desencorajado, pois torna a lógica do programa muito complexa1. Ele torna o rastreamento do fluxo do programa e a análise da correção dos programas muito difíceis1. O uso do goto pode ser simplesmente evitado usando as instruções break, continue e return1.

evitar goto. Tudo que pode ser feito com goto pode ser feito com outros laços
*/
#include <stdio.h>
int main()
{
    int i = 0;
    inicio:
    if (i < 5)
    {
        printf("Numero: %d\n",i);
        i++;
        goto inicio;
    }
    
    return 0;
}