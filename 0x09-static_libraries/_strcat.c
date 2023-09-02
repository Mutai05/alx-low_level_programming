/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to concatenate
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append the source string to the destination */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0'; /* Null-terminate the concatenated string */
	return dest;
}
