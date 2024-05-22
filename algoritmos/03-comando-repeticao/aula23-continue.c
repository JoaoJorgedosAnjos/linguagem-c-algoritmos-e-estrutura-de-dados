/*Comando continue:
interromper a repetição atual de qualquer
comando de laço (for, while ou do-while), e
passa para a próxima repetição

Forma geral:
repetição(condição1){
    if(condição2)
        continue;
}

system("pause");
return 0;
continue ignora todo o resto do codigo depois dele e volta para o laço de repetiçao
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Digite o valor de a:");
    scanf("%d", &a);
    printf("Digite o valor de b:");
    scanf("%d", &b);
    while (a <= b)
    {
        a = a + 1;
        if (a == 5)
            continue;
        printf("%d\n",a);
    }
    printf("%d\n", a);
    return 0;
}
/*
Digite o valor de a:1
Digite o valor de b:10
2
3
4
6
7
8
9
10
11
11
*/