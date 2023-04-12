/*
 * Ejercicio-11.c
 *
 *  Created on: 12 abr. 2023
 *      Author: jpz
 */

#include <stdio.h>

int main() {
    float precio, descuento, ahorro;

    printf("Ingrese el precio del producto: $");
    scanf("%f", &precio);

    printf("Ingrese el porcentaje de descuento: ");
    scanf("%f", &descuento);

    ahorro = precio * (descuento / 100);

    printf("El ahorro del cliente es de $%.2f.\n", ahorro);

    return 0;
}

