//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
#include <stdio.h>

int main()
{
    int hoursWorked;
    float hourlyRate, salary;
    
    printf("Digite o valor ganho por hora: ");
    scanf("%f", &hourlyRate);
    
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%d", &hoursWorked);
    
    salary = hourlyRate * hoursWorked;
    printf("Salário total é de %.2f\n", salary);
    
    return 0;
}
