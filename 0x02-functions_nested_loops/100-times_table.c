#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: n of type integer
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int row, column, result;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;

			if (column != 0)
				_putchar(',');

			if (result < 10)
				_putchar(' ');
			else if (result < 100)
				_putchar(' ');

			if (result >= 100)
			{
				_putchar(result / 100 + '0');
				_putchar((result / 10) % 10 + '0');
			}
			else if (result >= 10)
			{
				_putchar(result / 10 + '0');
			}

			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
