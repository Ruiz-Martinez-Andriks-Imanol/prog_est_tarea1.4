/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 03/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
  
    -Variables enteras y flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Condicionar a flotante
    -Comentarios para la documentación interna del programa
	*/	
#include <stdio.h>
int main() {
	//Declaración de variable
	int D, d;
	float area;
	//Entradas de Datos
	printf("Calcular el área del Rombo \n");
	printf("Introduzca D:");
	scanf("%d", &D);
	printf("Introduzca d:");
	scanf("%d", &d);
	//Proceso
	area=(float)D*d/2;
	//salida
	printf("El area del rombo es %f", area);
	return 0;
}
