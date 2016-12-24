/* Create a new program that prompts a user for numbers and
determines total revenue using the following formula: Total
Revenue = Price * Quantity. */

#include <stdio.h>

int main (void)

{
	int iPrecio = 0;
	int iCantidad = 0;
	
	printf("Vamos a calcular tu beneficio. Primero dame el precio del producto: ");
	scanf("%d", &iPrecio);
	printf("\nAhora necesitamos una cantidad total de esos productos vendidos: ");
	scanf("%d", &iCantidad);
	
	int iBeneficio = iCantidad * iPrecio;
	printf("\nPues bien, con esos parámetros el beneficio es de %d euros.", iBeneficio);
	
	return 0;
}
