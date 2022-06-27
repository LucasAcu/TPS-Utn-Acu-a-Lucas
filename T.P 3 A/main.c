
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
	FILE *pFile;
	int r;
	int var1[1001],var2[1001],var3[1003],var4[1001],var5[1001],var6[1001],var7[1001];

	pFile = fopen("data.csv","r");
	if(pFile == NULL)
	{
		printf("El archivo no existe");
		exit(EXIT_FAILURE);
	}
	do
	{
		r =fscanf(pFile,"%d,%s,%s,%d,%d,%s,%s\n",var1,var2,var3,var4,var5,var6,var7);
		if(r==4)
		{
			printf("Lei %d %s %s %d %d %s %s\n",var1,var2,var3,var4,var5,var6,var7);
		}
		else
			break;
	}while(!feof(pFile));

	fclose(pFile);
	exit(EXIT_SUCCESS);


	int rb;
	pFile = fopen("data.csv","rb");
		if(pFile == NULL)
		{
			printf("El archivo no existe");
			exit(EXIT_FAILURE);
		}
		do
		{
			rb =fscanf(pFile,"%d,%s,%s,%d,%d,%s,%s\n",var1,var2,var3,var4,var5,var6,var7);
			if(rb==4)
			{
				printf("Lei %d %s %s %d %d %s %s\n",var1,var2,var3,var4,var5,var6,var7);
			}
			else
				break;
		}while(!feof(pFile));

		fclose(!feof(pFile));
		exit(EXIT_SUCCESS);



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
            	modificar();
            	break;
            case 5:
            	baja();
            	break;
            case 6:
            	listaPasajero();
            	break;
            case 7:
            	ordenarPasajeros();
            	break;
            case 8:
            	break;
            case 9:
            	break;
            case 10:
            	break;
            	fput('p',c)
        }
    }while(option != 10);
    return 0;
}

