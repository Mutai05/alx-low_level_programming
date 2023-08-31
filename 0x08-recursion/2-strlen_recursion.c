#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case: End of the string */
		return (0);

	/* Recursively call the function for the rest of the string
	 * and add 1 for the current character.
	 */
	return (1 + _strlen_recursion(s + 1));
}

