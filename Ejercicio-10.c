/*
 * Ejercicio-10.c
 *
 *  Created on: 12 abr. 2023
 *      Author: jpz
 */

#include <stdio.h>

int main() {
    float pulgadas, milimetros;

    printf("Ingrese una cantidad en pulgadas: ");
    scanf("%f", &pulgadas);

    milimetros = pulgadas * 25.4;

    printf("%.2f pulgadas son %.2f milimetros.\n", pulgadas, milimetros);

    return 0;
}


