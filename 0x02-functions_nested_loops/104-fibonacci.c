#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, c;
	unsigned long int a1, a2, b1, b2, c1, c2;

	printf("%lu, %lu", a, b);
	for (i = 0; i < 96; i++)
	{
		if (i < 90)
		{
			c = a + b;
			printf(", %lu", c);
			a = b;
			b = c;
		}
		else
		{
			if (i == 90)
			{
				a1 = a / 1000000000;
				a2 = a % 1000000000;
				b1 = b / 1000000000;
				b2 = b % 1000000000;
			}
			c1 = a1 + b1 + ((a2 + b2) / 1000000000);
			c2 = (a2 + b2) % 1000000000;
			printf(", %lu%lu", c1, c2);
			a1 = b1;
			a2 = b2;
			b1 = c1;
			b2 = c2;
		}
	}
	printf("\n");
	return (0);
}
