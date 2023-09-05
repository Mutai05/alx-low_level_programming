#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: The input string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicated string */
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	/* Check if memory allocation was successful */
	if (duplicate == NULL)
		return (NULL);

	/* Copy the input string to the duplicated string */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
