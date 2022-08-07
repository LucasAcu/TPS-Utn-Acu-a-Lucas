/*
 ============================================================================
 Name        : practicas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct vivienda{
	int idVivienda;//(comienza en 20000,autoincremental)
	char calle;
	int cantidadPersonas;
	int cantidadHabitaciones;
	char tipoVivienda;//(1.CASA-2.DEPARTAMENTO-3.CASILLA-.4.RANCHO)
	char legajoCensista;//(DEBE EXISTIR)
};

struct censista{
	char legajoCensista;
	char nombre;
	int edad;
	int telefono;
};
int main(void) {
	int opcion;
	do{
		printf("menu\n");
		printf("1.Alta Vivienda\n");
		printf("2.Modificar Vivienda\n");
		printf("3.Baja Vivienda\n");
		printf("4.Listar Vivienda\n");
		printf("5.Listar Censistas\n");
		printf("6.Salir");

		switch(opcion){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
		}
	}while(opcion==6);
	return EXIT_SUCCESS;
}
