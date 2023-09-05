#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate the length of the new string */
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* for the newline character */
	}
	len++; /* for the null terminator */

	/* allocate memory for the new string */
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	/* copy the arguments to the new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
