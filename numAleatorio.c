/*
 * Programa que pide al usuario un número aleatorio del 1 al 10.
 * si no colabora, un bucle do-while insiste.
 * Arreglados bugs con srand() y rand(). Había que incluir <time.h>
 * y <stdlib.h> respectivamente.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int numAleatorio = 0;
	int numRespuesta = 0;
	srand(time(NULL)); //Para usar esta "randomización" con el tiempo ha sido necesario usar <time.h>

	numAleatorio = (rand() % 10) + 1;//Se fija un número aleatorio del 1 al 10 para numAleatorio.

	do //Bucle do-while que obliga al usuario a escribir un número del 1 al 10.
	{
		printf("Adivina un número del 1 al 10: ");
		scanf("%d", &numRespuesta);
	}
	while (numRespuesta < 1 || numRespuesta > 10);

	if (numRespuesta == numAleatorio)
	{
		printf("\n¡Acertaste!");
	}
	else
	{
		printf("\nMala suerte, el número aleatorio era %d , no %d.", numAleatorio, numRespuesta);
	}
}
