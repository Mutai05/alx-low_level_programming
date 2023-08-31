#include "main.h"

/**
 * sqrt_recursive - Recursive function to calculate the square root.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, or -1 if not found.
 */
int sqrt_recursive(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
		return (guess);
	else if (square > n)
		return (-1);
	else
		return (sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The square root if found, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Check for negative input */
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_recursive(n, 1));
}
