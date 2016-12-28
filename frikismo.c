/* Felicitación friki para el día del orgullo friki */

#include <stdio.h>

int main(void)
{
	char frikismo;
	do
	{
		printf("¿Te consideras friki? Y/N: ");
		scanf("%c", &frikismo);
	}
	while (frikismo != 'Y');
	
	printf("\n¡¡Feliz día del orgullo friki!!\n");
	
	return 0;
}
