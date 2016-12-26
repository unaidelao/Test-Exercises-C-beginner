/* Recursion exercise with Collatz Conjecture */

#include <stdio.h>

// prototype
int collatz(int n);

int main(void)
{
	int n;
	
	printf ("Enter a positive number: ");
	scanf ("%d", &n);
	
	collatz(n);
	
	printf ("%d steps needed\n", collatz(n));
	
	return 0;
}

int collatz(int n)
{
	// base case
	if (n == 1)
		return 0;
	// even numbers
	else if ((n % 2) == 0)
		return 1 + collatz(n/2);
	// odd numbers
	else
		return 1 + collatz(3*n + 1);
}
