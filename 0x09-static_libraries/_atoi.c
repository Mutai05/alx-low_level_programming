/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* 1 for positive, -1 for negative */
	int i = 0;

	/* Handle negative sign if present */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	/* Iterate through the string and convert to integer */
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			/* Break if a non-digit character is encountered */
			break;
		}
		i++;
	}

	return result * sign;
}
