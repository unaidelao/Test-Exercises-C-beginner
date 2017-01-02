/*
 * Ejemplo de función recursiva, similar al ejercicio sigma de CS50
 * Autor: Unai de la O
 * julio de 2016
 */

#include <stdio.h>

// prototipo
int sigma(int);

int main(void)
{
	int n;

	do
	{
		printf("Ingrese un número natural: ");
		scanf("%i", &n);
	}
	while (n < 1);

	int respuesta = sigma(n);

	printf("\nEl resultado con la función sigma es %i.\n", respuesta);

  return 0;
}

/*
 * Esta función retorna la suma de 1 hasta m de forma recursiva.
 * Y retorna 0 si m no es un número positivo.
 */
int sigma (int m)
{
	if (m <= 0)
	{
		return 0;
	}
	else
	{
		return (m + sigma (m -1));
	}
}
