/*
 * Ejercicio-12.c
 *
 *  Created on: 12 abr. 2023
 *      Author: jpz
 */

#include <stdio.h>

int main() {
    float longitud, diametro, volumen, masa;

    printf("Ingrese la longitud del filamento en metros: ");
    scanf("%f", &longitud);

    printf("Ingrese el diámetro del filamento en milímetros: ");
    scanf("%f", &diametro);

    // Convertir el diámetro a centímetros
    diametro /= 10;

    // Calcular el volumen del filamento en cm3
    volumen = 3.14159 * (diametro/2) * (diametro/2) * longitud;

    // Calcular la masa del filamento en gramos
    masa = volumen * 1.25;

    printf("La pieza consumirá %.2f gramos de filamento.\n", masa);

    return 0;
}

