/*
 * Vivienda.c
 *
 *  Created on: 2 ago. 2022
 *      Author: Padrino
 */

#include <stdio.h>


struct nodo{
	int dato;
	struct nodo * siguiente;
} *primero, * ultimo;

struct vivienda{
	int idVivienda;//(comienza en 20000,autoincremental)
	char calle;
	int cantidadPersonas;
	int cantidadHabitaciones;
	char tipoVivienda;//(1.CASA-2.DEPARTAMENTO-3.CASILLA-.4.RANCHO)
	char legajoCensista;//(DEBE EXISTIR)
};

void altaVivienda(struct nodo* new){
	struct nodo *  nuevo = new nodo();
	printf("Ingrese el nuevo dato");
	scanf("%id",&);
}
