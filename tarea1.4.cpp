/* Autor: Andriks Imanol Ruiz Mart�nez, Realizado: 03/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programaci�n Estructrada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:
  
    -Variables enteras y flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librer�as
    -Condicionar a flotante
    -Comentarios para la documentaci�n interna del programa
	*/	
#include <stdio.h>
int main() {
	//Declaraci�n de variable
	int D, d;
	float area;
	//Entradas de Datos
	printf("Calcular el �rea del Rombo \n");
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
