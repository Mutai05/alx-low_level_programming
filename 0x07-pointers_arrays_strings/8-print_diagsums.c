#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, fs = 0, bs = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			fs += a[i];
		if (i % (size - 1) == 0 && i <= size * (size - 1) && i != 0)
			bs += a[i];
	}

	printf("%d, %d\n", fs, bs);
}
