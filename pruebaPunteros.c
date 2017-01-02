/*
 * Práctica con punteros y localización de memoria.
 *
 * Del funcionamiento de este programa se deduce lo siguiente: una vez que se ha asignado
 * la dirección de memoria de una variable cualquiera a una variable de tipo puntero, existen
 * dos formas de acceder al contenido de dicha variable. La primera es a través del nombre de la
 * variable que contiene el dato. La segunda consiste en aplicar el operador de indirección sobre
 * el puntero que almacena dicha dirección. Cualquiera de las dos formas permite tanto consultar
 * el dato como modificarlo.
 */

#include <stdio.h>

int main (void)
{
	long Dato = 0;
	long * refDato;

	refDato = &Dato;
	printf("La dirección de la variable Dato es = %p\n", &Dato);
	printf("El valor de la variable refDato es = %p\n", refDato);

	Dato = 10;
	printf("El contenido de la variable Dato es = %ld\n", Dato);
	printf("El contenido de la dir. almacenada en refDato es = %ld\n", *refDato);

	*refDato = 5;
	printf("El nuevo contenido de la variable Dato es = %ld\n", Dato);
	printf("El nuevo contenido de la dir. almacenada en refDato es = %ld\n", *refDato);

	return 0;
}
