/*
 * Ejercicio-8.c
 *
 *  Created on: 12 abr. 2023
 *      Author: jpz
 */


#include <stdio.h>

int main() {
    int hojas_iniciales, hojas_por_impresion, n_impresiones, hojas_restantes;

    printf("Ingrese la cantidad inicial de hojas en la bandeja: ");
    scanf("%d", &hojas_iniciales);

    printf("Ingrese la cantidad de hojas que se utilizan en cada impresion: ");
    scanf("%d", &hojas_por_impresion);

    printf("Ingrese la cantidad de impresiones realizadas: ");
    scanf("%d", &n_impresiones);

    hojas_restantes = hojas_iniciales - hojas_por_impresion * n_impresiones;

    printf("Quedan %d hojas en la bandeja.\n", hojas_restantes);

    return 0;
}
