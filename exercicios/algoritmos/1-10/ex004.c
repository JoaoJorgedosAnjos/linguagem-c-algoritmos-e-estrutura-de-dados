//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include <stdio.h>

int main()
{
    float grade1, grade2,grade3,grade4, averageGrade;
    printf("Digite as 4 notas bimestrais:");
    scanf("%f %f %f %f", &grade1, &grade2, &grade3, &grade4);
    averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;
    printf("A média final é: %.2f\n", averageGrade);
    return 0;
}
