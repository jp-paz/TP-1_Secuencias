/*
 * Ejercicio-5.c
 *
 *  Created on: 12 abr. 2023
 *      Author: jpz
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int anio_nacimiento;
    printf("Ingrese su año de nacimiento: ");
    scanf("%d", &anio_nacimiento);

    int anio_actual;
    time_t tiempo = time(NULL);
    struct tm *fecha_actual = localtime(&tiempo);
    anio_actual = fecha_actual->tm_year + 1900;

    int edad = anio_actual - anio_nacimiento;
    printf("Tiene %d años\n", edad);

    return 0;
}

