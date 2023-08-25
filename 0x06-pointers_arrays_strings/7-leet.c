/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i = 0;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";

	while (str[i] != '\0')
	{
		int j = 0;

		while (leet_map[j] != '\0')
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replace[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
