/*
 * Ejercicio-3.c
 *
 *  Created on: 12 abr. 2023
 *      Author: jpz
 */


#include <stdio.h>

int main() {
   float base, altura, area;

   printf("Ingrese la base del rectangulo: ");
   scanf("%f", &base);

   printf("Ingrese la altura del rectangulo: ");
   scanf("%f", &altura);

   area = base * altura;

   printf("El area del rectangulo es: %.2f", area);

   return 0;
}
