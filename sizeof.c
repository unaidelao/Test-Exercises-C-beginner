/*
 * Programa que sirve para ver el tamaño en bytes de cada tipo de variable.
 * Estos tamaños pueden variar según el equipo que tengamos.
 * Depende de la plataforma, puede dar problemas al compilar si en vez de
 * %zu pusiésemos %d.
 */

#include <stdio.h>

int main(void)
{
	//Se declaran las variables, pero no se les asigna ningún valor.
	char c;
	double d;
	float f;
	int i;

	/* Se le pide al programa que escriba en pantalla con %d, porque lo que
	 * queremos es un número entero que nos diga el tamaño de ese tipo de variables.
   */
	printf("Una variable char ocupa %zu byte\n", sizeof(c));
	printf("Una variable double ocupa %zu bytes\n", sizeof(d));
	printf("Una variable float ocupa %zu bytes\n", sizeof(f));
	printf("Una variable int ocupa %zu bytes\n", sizeof(i));

  return 0;
}
