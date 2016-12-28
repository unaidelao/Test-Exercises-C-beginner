/* Create a program that uses the formula (a - b) * (x - y) to output the result; this time, 
 * however, prompt the user for the valuesa, b, x, and y.
 * Use appropriate variable names and naming conventions. 
 */

#include <stdio.h>

int main (void)

{
	int iA = 0;
	int iB = 0;
	int iX = 0;
	int iY = 0;
	int iResult = 0;
	
	
	printf("\nDa un valor a \"A\": " );
	scanf("%d", &iA);
	
	printf("\nDa un valor a \"B\": " );
	scanf("%d", &iB);
	
	printf("\nDa un valor a \"X\": " );
	scanf("%d", &iX);
	
	printf("\nY por último, da un valor a \"Y\": " );
	scanf("%d", &iY);
	
	iResult = (iA - iB) * (iX - iY);
	
	printf("Calculando...\nEl resultado de la función es %d", iResult);
	
	return 0;
	
}