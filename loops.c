/* Ejemplos de los distintos loops: while, do-while y for. */

#include <stdio.h>

// constante MAX, será el número máximo a contar en los loops
#define MAX 10

int main(void)
{
    int counter = 0;

    // while loop
    printf("While loop del 1 al %i:\n", MAX);
    while (counter < MAX)
    {
        counter++;
        printf("%i ", counter);
    }

    printf("\n\n");

    // do-while loop
    counter = 0;
    printf("Do-while loop del 1 al %i:\n", MAX);
    do
    {
        counter++;
        printf("%i ", counter);
    }
    while (counter < MAX);

    printf("\n\n");

    // for loop
    printf("For loop del 1 al %i:\n", MAX);
    for (counter = 1; counter <= MAX; counter++)
    {
        printf("%i ", counter);
    }

    printf("\n\n");

    return 0;
}
