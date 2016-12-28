/* Dado a = 5, b = 1, x = 10 e y = 5, crear un programa que saque
el resultado de la fórmula f = (a - b)(x - y) usando una sola 
función printf */

#include <stdio.h>

int main(void)
{
	int a = 5;
	int b = 1;
	int x = 10;
	int y = 5;
	
	printf("El resultado de la fórmula es %d\n", (a - b) * (x - y));
	
	return 0
}