#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times,
 * followed by a new line after each set.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
