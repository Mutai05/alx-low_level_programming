#include "main.h"

/**
 * _strncat - concatenates two strings with a limit on the number of bytes
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
