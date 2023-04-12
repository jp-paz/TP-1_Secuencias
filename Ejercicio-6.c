/*
 * Ejercicio-6.c
 *
 *  Created on: 12 abr. 2023
 *      Author: jpz
 */

#include <stdio.h>

int main() {
    int x, y;
    float resultado;

    printf("Ingrese el valor de X: ");
    scanf("%d", &x);
    printf("Ingrese el valor de Y: ");
    scanf("%d", &y);

    if (y == 0) {
        printf("No se puede dividir por cero.\n");
        return 1;
    }

    resultado = (float) x / y;

    printf("%d dividido por %d es igual a %.2f\n", x, y, resultado);

    return 0;
}

