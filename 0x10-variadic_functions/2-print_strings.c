#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings (can be NULL).
 * @n: The number of strings passed to the function.
 * @...: The strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
