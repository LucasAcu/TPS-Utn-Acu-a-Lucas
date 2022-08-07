#include <stdio.h>
#include <stdlib.h>
#include <math.h>




float calcularPrecios(float debito,float credito,float bitcoin,float precioUnitario,float precioDif);
void ingresarKilometros();
int utn_getNumero(int* pResultado,char* mensaje, char* mensajeError,int minimo,int maximo,int reintentos);

float precioAerolineas,precioLatam,kilometros;

int utn_getNumero(int* pResultado,char* mensaje, char* mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;
	int buffer;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%c",&buffer);
			if(buffer <= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno =0;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos>=0);
	}
	return retorno;
}

int main(void) {
	int opcion;
	do{
		printf("\nMenu de opciones");
		printf("\n1.Ingresar kilometros");
		printf("\n2.Credito");
		printf("\n3.Bitcoin");
		printf("\n4.Precio por kilomeros(unitario)");
		printf("\n5.Diferencia de precio ingresa(Latam-Aerolineas)");
		printf("\nIngresa una opcion: ");

		switch(opcion)
		{
			case 1: IngresarKilometros();
					system("pause");
					break;
			case 2: IngresarPrecioVuelos();
					system("pause");
					break;
			case 3: calcularPrecios();
					system("pause");
					break;
			case 4: informarResultados();
					system("pause");
					break;
			case 5: cargaForzada();
					system("pause");
					break;
			case 6:
					break;
					system("cls");
		}
	}while(opcion == 6);

	return EXIT_SUCCESS;
}
void pedirDatos(float x,float y)
{
	printf("Ingrese el primer numero");
	scanf("%f",&x);
	printf("Ingrese el segundo numero");
	scanf("%f",&y);
}
void ingresarKilometros()
{
	float kilometros;
	printf("Ingrese los kilometros");
	scanf("%f",&kilometros);
}
void IngresarPrecioVuelos(Aerolineas,Latam)
{
	char i;
	if(i== Aerolineas)
	{
		printf("Ingrese el precio de Aerolineas");
		scanf("%i",&Aerolineas);
	}
	if(i== Latam)
	{
		printf("ingrese el precio de Latam");
		scanf("%i",&Latam);
	}
}

float calcularPrecios(float debito,float credito,float bitcoin,float precioUnitario,float precioDif)
{
	int x;
	int y;
	printf("Ingrese tipo de precio");
	if(debito)
	{
		printf("Ingrese el primer numero");
		scanf("%i",&x);
		float suma = x + y;
		float descuento = (suma)*10/100;

		printf("El descuento es ",&descuento);
	}
	if(credito)
	{
		float precioAerolineas;
		float precioLatam;
		printf("Ingrese el precio de Aerolineas");
		printf("%f",&precioAerolineas);
		printf("Ingrese el precio de latam");
		printf("%f",&precioLatam);
		float interesAerolineas = ((precioAerolineas)*25/100)/12;
		float interesLatam =  ((precioLatam)*25/100)/12;

		printf("El interes de Aerolineas y de latam es ",interesAerolineas,interesLatam);
	}
	if(bitcoin)
	{
		int cantBitcoin;
		float bitcoin;
		printf("Ingrese cantidad de bitcoins");
		scanf("%i",&cantBitcoin);

		bitcoin = cantBitcoin *4606954.55;


		printf("Resultado= ",&bitcoin);
	}
	if(precioUnitario)
	{
		float precioUnitario;
		printf("Ingrese el precio unitario");
		scanf("%f",&precioUnitario);
		precioUnitario = kilometros;
		printf("El precio unitario es: ", precioUnitario);
	}
	if(precioDif)
	{
		float precioAerolineas;
		float precioLatam;
		printf("Ingrese el precio de Aerolineas");
		scanf("%f",&precioAerolineas);
		printf("Ingrese el precio de Latam");
		scanf("%f",&precioLatam);
		float aerolineasARS= precioAerolineas * 4606954.55;
		float latamARS= precioLatam *4606954.55;
		if(aerolineasARS<latamARS)
		{

			printf("Latam es mas caro cuesta: %f",&latamARS);
		}
		if(aerolineasARS>latamARS)
		{
			printf("Aerolineas es mas caro y cuesta: %f",&aerolineasARS);
		}
	}
	return 1;

}

void informarResultados()
{

}

void cargaForzada()
{
	for(int i=0;i<5;i++){

	}
}


void imprimirResultados(float descuento, float interes,float bitcoin, float precioUnitario,float precioDif)
{
	printf("\na) Precio con tarjeta de debito: $%.2f\n"
			"b) Precio con tarjeta de credito: $%.2f\n"
			"c) Precio pagando con bitcoin: $%.2f\n"
			"d) Precio unitario $%.2f\n"
			,descuento,interes,bitcoin,precioUnitario,precioDif);
}
