#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array representing the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int size = sizeof(a);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
