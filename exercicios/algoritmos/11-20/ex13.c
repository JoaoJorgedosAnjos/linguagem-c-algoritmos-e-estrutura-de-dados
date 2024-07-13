/*Exercicio 013
Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7
*/
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Digite sua altura em cm: \n");
    float height, idealWeight;
    scanf("%f", &height);
    printf("Digite seu sexo: (0 para homem e 1 para mulher)\n");
    int sexType;
    char sex[10]; 
    scanf("%d", &sexType);
    if (sexType == 0)
    {
        idealWeight = (72.7 * height / 100) - 58;
        strcpy(sex, "homem");
    }
    else
    {
        idealWeight = (62.1 * height / 100) - 44.7;
        strcpy(sex, "mulher"); 
    }
    
    printf("Você é um(a) %s e seu peso ideal é: %.2f\n",sex,idealWeight);

    return 0;
}

/*
#include <stdio.h>

int main() {
    float height, idealWeight;
    int sexType;

    printf("Digite sua altura em cm: \n");
    scanf("%f", &height);
    
    printf("Digite seu sexo: (0 para homem e 1 para mulher)\n");
    scanf("%d", &sexType);

    Calcular peso ideal com base no sexo
    idealWeight = (sexType == 0) 
                    ? (72.7 * (height / 100)) - 58 // Homem
                    : (62.1 * (height / 100)) - 44.7; // Mulher

    const char* sex = (sexType == 0) ? "homem" : "mulher";

    printf("Você é um(a) %s e seu peso ideal é: %.2f kg\n", sex, idealWeight);

    return 0;
}
*/