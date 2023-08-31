#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the number.
 */
int factorial(int n)
{
	if (n < 0) /* Check for negative input */
		return (-1); /* Return -1 to indicate an error */
	else if (n == 0) /* Base case: Factorial of 0 is 1 */
		return (1);
	else
		return (n * factorial(n - 1)); /* Recursive case */
}
