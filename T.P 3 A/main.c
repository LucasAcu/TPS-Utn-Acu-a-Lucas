#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Passenger.h"

/****************************************************
    Menu:
     1. Cargar los datos de los pasajeros desde el archivo data.csv (modo texto).
     2. Cargar los datos de los pasajeros desde el archivo data.csv (modo binario).
     3. Alta de pasajero
     4. Modificar datos de pasajero
     5. Baja de pasajero
     6. Listar pasajeros
     7. Ordenar pasajeros
     8. Guardar los datos de los pasajeros en el archivo data.csv (modo texto).
     9. Guardar los datos de los pasajeros en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/



int main()
{
    int option = 0;
    int proximoId = 0;
    float bufferAltura;
    char bufferNombre[NOMBRE_LEN];

    LinkedList* listaPasajeros = ll_newLinkedList();
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaPasajeros);
                break;
            case 2:
            	controller_loadFromText("data.csv",listaPasajeros);
            	break;
            case 3:
            	utn_getNumeroFlotante(&bufferAltura,"\naltura","\nAltura incorrecta")
            	if(alumno_agregarAlumno(arrayPunterosAlumno,QTY_ALUMNOS,"a borrar",1.85,proximoId)>=0)
            	{
            		printf("\nAlta Ok");
            		proximoId++;
            	}
            	break;
            case 4:
            	break;
            case 5:
            	break;
            case 6:
            	break;
            case 7:
            	break;
            case 8:
            	break;
            case 9:
            	break;
            case 10:
            	break;
        }
    }while(option != 10);
    return 0;
}

