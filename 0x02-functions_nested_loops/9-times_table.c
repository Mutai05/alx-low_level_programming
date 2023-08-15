#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the first column */

		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');

			product = row * column;

			if (product < 10)
				_putchar(' ');

			if (product >= 10)
				_putchar('0' + product / 10);

			_putchar('0' + product % 10);
		}

		_putchar('\n');
	}
}
