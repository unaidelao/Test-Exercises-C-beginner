/* 
 * Ejemplo de cuenta atrás usando un switch.
 * Se consigue sencillamente no poniendo los breaks que debieran ir
 * entre los cases.
 */

#include <stdio.h>

int main (void)
{
	int a;
	printf ("Pon un número del 1 al 5 para la cuenta atrás: ");
	scanf ("%d", &a);
	
	switch (a)
	{
		case 5:
			printf ("Cinco\n");
		case 4:
			printf ("Cuatro\n");
		case 3:
			printf ("Tres\n");
		case 2:
			printf ("Dos\n");
		case 1:
			printf ("Uno\n");
		default:
			printf ("¡Despegue!\n");
	}
	
	return 0;
}