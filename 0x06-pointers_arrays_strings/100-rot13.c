/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *start = str;
	char *rot13_map = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_replace = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str)
	{
		char *pos = rot13_map;
		char *replace = rot13_replace;

		while (*pos)
		{
			if (*str == *pos)
			{
				*str = *replace;
				break;
			}
			pos++;
			replace++;
		}
		str++;
	}

	return (start);
}
