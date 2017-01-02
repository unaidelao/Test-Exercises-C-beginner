/*
 *Código para practicar la función scanf
 */

 #include <stdio.h>

int main()

{
	int x;
	int y;

	//Se solicita al usuario dos números para acabar sumándolos.
	printf("Por favor, teclea un número entero del 1 al 10: ");
	scanf("%d", &x);

	printf("Ahora teclea otro número entero del 1 al 10: ");
	scanf("%d", &y);

	printf("\nGracias. La suma de ambos números es %d\n",x + y);

	//Al tal resultado de sumar dos números, se le asigna una variable nueva.
	int z = x + y;

	if (z == 0)
	{
		printf("\nEl resultado da 0, no puedo mostrarte una cuenta atrás.\n");
	}
	else
	{

		printf("\nY la cuenta atrás de tal resultado es la que sigue:\n");

		for (int n = z; n > 0; n--) //Esa variable nueva será desde donde el loop for empezará a contar.
		{
			//Cuenta atrás desde la suma de los dos números que eligió el usuario.
			printf("%d\n", n);
		}

		for (int n = z; n < 0; n++) //Igual pero en caso de un resultado negativo.
		{
			printf("%d\n", n);
		}
	}
}
