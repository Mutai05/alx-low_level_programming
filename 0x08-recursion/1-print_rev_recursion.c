#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Description: This function uses recursion to print a string
 * in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: End of the string */
		return;

	_print_rev_recursion(s + 1); /* Recurse for the next character */
	_putchar(*s); /* Print the current character */
}
