/*Los empleado de una fábrica trabajan en dos turnos: Diurno y Nocturno, Se desea calcular el valor diario a recibir bajo los siguientes acuerdos:

La tarifa diurna es de 5 dólares
La tarifa nocturna es de 8 dólares
Si es domingo la tarifa diurna se incrementa en 2 y la nocturna en 3*/

#include <stdio.h>
#include <string.h>

int main() {
    char turno[10], dia[10];
    int salario;
    
    scanf("%s", turno);
    scanf("%s", dia);

    if (strcmp(turno, "diurno") == 0 && strcmp(dia, "domingo") == 0)
        salario = 7 * 8;
    else if (strcmp(turno, "nocturno") == 0 && strcmp(dia, "domingo") == 0)
        salario = 8 * 11;
    else if (strcmp(turno, "diurno") == 0)
        salario = 5 * 8;
    else
        salario = 8 * 8;

    printf("Valor diario a recibir= %d", salario);

    return 0;
}
