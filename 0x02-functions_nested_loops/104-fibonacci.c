#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 2; count < 98; count++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}
