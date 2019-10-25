#include <stdio.h>
#include <stdlib.h>

struct Product 
{
  char nombre[20];
  float cantidad;
  float precio;
};

void imprimir(struct Product [], int cantProd); //function declaration
float total(struct Product [], int cantProd);

int main()
{
	int cantProd, i;
	printf("Punto de venta\n");
	printf("Anote el número de productos: ");
	scanf("%d", &cantProd);
	struct Product venta[cantProd];
	
	for(i=0; i<cantProd; i++)
	{
		printf("Nombre del producto %d: ",i+1);
		fflush(stdin);
		scanf("%s", venta[i].nombre);
		printf("Número de artículos del producto %d: ", i+1);
		scanf("%f", &venta[i].cantidad);
		printf("Precio del producto %d: $", i+1);
		scanf("%f", &venta[i].precio);
	}
	
	total(venta, cantProd);
	imprimir(venta, cantProd);
	return 0;
	
}

float total(struct Product venta[], int cantProd)
{
	float cantidad1[cantProd], precio1[cantProd], multiplicacion[cantProd], total= 0;
	int i;
	for(i=0; i<cantProd;i++)
	{
		cantidad1[i] = venta[i].cantidad;
		precio1[i] = venta[i].precio;
	}
	
	for(i=0; i<cantProd; i++)
	{
		multiplicacion[i] = cantidad1[i]*precio1[i];
		printf("\nEl parcial es: $%.2f\n", multiplicacion[i]);
	}
	
	for(i=0; i<cantProd; i++)
	{
		total += multiplicacion[i];
	}
	printf("\nEl total a pagar es: $%.2f\n", total);
	
	return total;
}


void imprimir(struct Product venta[], int cantProd)
{
	int i;
	/*printf("Cantidad de productos: ");
	scanf("%d", &cantProd);*/
	system("clear");
	for(i=0;i<cantProd; i++)
	{
		printf("Nombre del producto: %s\n", venta[i].nombre);
		printf("Número de artículos: %.2f\n", venta[i].cantidad);
		printf("Precio del producto: %.2f\n", venta[i].precio);
		printf("\n");
	}
	getchar();
}
	


