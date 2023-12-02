/*Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior */

#include <stdio.h>

int main()
{
    float salario, salariofinal;
    scanf("%f", &salario);
    salariofinal=salario*1.25;
    printf("salario final es % .2f", salariofinal);
}