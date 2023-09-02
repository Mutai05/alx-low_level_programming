/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: The destination string
 * @src: The source string to concatenate
 * @n: The maximum number of bytes to concatenate from src
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append the source string to the destination, up to n bytes */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0'; /* Null-terminate the concatenated string */
	return dest;
}
