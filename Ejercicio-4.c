/*
 * Ejercicio-4.c
 *
 *  Created on: 12 abr. 2023
 *      Author: jpz
 */

#include <stdio.h>

int main() {
   float radio, perimetro;
   const float PI = 3.14159265; // Definimos una constante para el valor de PI

   printf("Ingrese el radio de la circunferencia: ");
   scanf("%f", &radio);

   perimetro = 2 * PI * radio;

   printf("El perimetro de la circunferencia es: %.2f", perimetro);

   return 0;
}

