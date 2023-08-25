#include <stdio.h>

/**
 * infinite_add - Adds two numbers as strings and stores the result in a buffer
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result, or 0 if the result can't be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i, j;

	/* Calculate the lengths of the input strings */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Ensure the buffer size is sufficient */
	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	/* Start adding digits from the end of both numbers */
	i = len1 - 1;
	j = len2 - 1;
	r[size_r] = '\0'; /* Null-terminate the result string */

	while (i >= 0 || j >= 0 || carry)
	{
		/* Calculate the sum of digits at the current positions */
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		/* Calculate the carry for the next iteration */
		carry = sum / 10;

		/* Store the digit in the result buffer */
		r[size_r - 1] = (sum % 10) + '0';

		/* Move to the previous positions in the input and result */
		i--;
		j--;
		size_r--;
	}

	/* If there's still a carry, the result can't fit in the buffer */
	if (carry)
		return (0);

	/* Shift the result to the beginning of the buffer */
	while (*r == '0')
		r++;

	return (r);
}
