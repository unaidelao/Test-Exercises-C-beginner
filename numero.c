/*
 * Sencillo programa que recoge un número del usuario y lo contrasta con una
 * serie de condiciones.
 */
#include <stdio.h>

int main (void)
{
  int numero;
  printf("Teclea un número del 1 al 30: ");
  scanf("%i", &numero);

  if (numero <= 0 || numero > 30) {
    printf ("\nHas tecleado un número incorrecto.\nMayor que 30 o 0.\n");
  }
  else if (numero <= 10) {
    printf ("\nHas tecleado un número pequeño.\nEntre 1 y 10.\n");
  }
  else if (numero <= 20) {
    printf ("\nHas tecleado un número mediano.\nEntre 11 y 20.\n");
  }
  else {
    printf ("\nHas tecleado un número grande.\nMayor que 20.\n");
  }

  return 0;
}
