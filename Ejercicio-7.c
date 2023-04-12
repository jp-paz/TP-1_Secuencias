/*
 * Ejercicio-7.c
 *
 *  Created on: 12 abr. 2023
 *      Author: jpz
 */

#include <stdio.h>

int main() {
    int x, y, resultado;

    printf("Ingrese el valor de X: ");
    scanf("%d", &x);
    printf("Ingrese el valor de Y: ");
    scanf("%d", &y);

    resultado = x * y;

    printf("%d multiplicado por %d es igual a %d\n", x, y, resultado);

    return 0;
}

