/*
 * Ejercicio-9.c
 *
 *  Created on: 12 abr. 2023
 *      Author: jpz
 */


#include <stdio.h>

int main() {
    float sueldo, impuesto, sueldo_neto;

    printf("Ingrese el sueldo del empleado: $");
    scanf("%f", &sueldo);

    impuesto = sueldo * 0.3;
    sueldo_neto = sueldo - impuesto;

    printf("El estado se queda con $%.2f del sueldo del empleado.\n", impuesto);
    printf("El sueldo neto del empleado es de $%.2f.\n", sueldo_neto);

    return 0;
}
