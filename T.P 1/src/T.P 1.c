#include <stdio.h>
#include <stdlib.h>



void descuento(float x,float y);
void interes(float x, float y);
void bitcoin(float x, float y);
void precioUnitario(float x, float y);
void pedirDatos();

float precioAerolineas,precioLatam,kilometros;

int main(void) {
	int opcion;
	do{
		printf("\nMenu de opciones");
		printf("\n1.Debito");
		printf("\n2.Credito");
		printf("\n3.Bitcoin");
		printf("\n4.Precio por kilomeros(unitario)");
		printf("\n5.Diferencia de precio ingresa(Latam-Aerolineas)");
		printf("\nIngresa una opcion: ");
		scanf(&opcion);

		switch(opcion){
		case 1: pedirDatos();
				descuento(precioAerolineas,precioLatam);
				system("pause");
				break;
		case 2: pedirDatos();
				interes(precioAerolineas,precioLatam);
				system("pause");
				break;
		case 3: pedirDatos();
				bitcoin(precioAerolineas,precioLatam);
				system("pause");
				break;
		case 4:	pedirDatos();
				precioUnitario(precioAerolineas,precioLatam);
				system("pause");
				break;
		default: printf("Opcion Invalida");
				break;
		}
		system("cls");
	}while(opcion !=1 || opcion !=2 || opcion !=3|| opcion !=4);

	return EXIT_SUCCESS;
}
void pedirDatos(){
	printf("Ingrese los kilometros");
	scanf("%f", &kilometros);
	printf("Ingresa precio de Aerolineas: ");
	scanf("%f",&precioAerolineas);
	printf("Ingresa precio de Latam: ");
	scanf("%f",&precioLatam);
}
void descuento(float x,float y){
	float suma = x + y;
	float descuento = (suma)*10/100;

	printf("El descuento es ",descuento);
}
void interes(float x,float y){
	float interesAerolineas = ((precioAerolineas)*25/100)/12;
	float interesLatam =  ((precioLatam)*25/100)/12;

	printf("El interes de Aerolineas y de latam es ",interesAerolineas,interesLatam);
}

void bitcoin(float x,float y){
	float aerolineasARS= precioAerolineas * 4606954.55;
	float latamARS= precioLatam *4606954.55;

	printf("Resultado= ",bitcoin);
}
void precioUnitario(float kilometros, float precioUnitario)
{
	precioUnitario= kilometros;
	printf("El precio unitario es: ", precioUnitario);
}
void imprimirResultados(float descuento, float interes, float conversor, float precioUnitario)
{
	printf("\na) Precio con tarjeta de debito: $%.2f\n"
			"b) Precio con tarjeta de credito: $%.2f\n"
			"c) Precio pagando con bitcoin: $%.2f\n"
			"d) Precio unitario $%.2f\n"
			,descuento,interes,bitcoin,precioUnitario);
}
