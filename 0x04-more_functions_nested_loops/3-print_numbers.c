#include <stdio.h>

/**
 * main -> a program that prints the alphabets in lowercase,
 * followed by a new line
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
