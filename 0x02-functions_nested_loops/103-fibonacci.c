#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long fib1 = 1, fib2 = 2, next;
	long sum = 2; // Initialize sum with the value of the first even term (2)

	while (1)
	{
		next = fib1 + fib2;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		fib1 = fib2;
		fib2 = next;
	}

	printf("%ld\n", sum);

	return (0);
}
