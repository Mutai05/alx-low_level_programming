#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes and prints the sum of even-valued terms in
 * the Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long sum = 2; /* Initialize sum with the value of the first even term (2) */
	long a = 1;
	long b = 2;
	long c = a + b;

	while (c <= 4000000)
	{
		if (c % 2 == 0)
		{
			sum += c;
		}

		a = b;
		b = c;
		c = a + b;
	}

	printf("%ld\n", sum);
	return (0);
}
