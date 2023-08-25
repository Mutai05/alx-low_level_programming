/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: The string to convert.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
