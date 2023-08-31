#include "main.h"

/**
 * is_prime_recursive - Recursive function to check for prime number.
 * @n: The number to be checked.
 * @i: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int i)
{
	if (n <= 1) /* Base case: 0 and 1 are not prime */
		return (0);
	if (i * i > n) /* Base case: The square root of n, it's prime */
		return (1);
	if (n % i == 0) /* If n is divisible by i, it's not prime */
		return (0);

	/* Continue checking with the next divisor */
	return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Start the recursive check with i = 2 (first prime number) */
	return (is_prime_recursive(n, 2));
}
