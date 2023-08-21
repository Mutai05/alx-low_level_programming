#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
    int i = 0;

    /* Loop through the string, incrementing by 2 each time */
    while (str[i] != '\0')
    {
        /* Print the current character */
        _putchar(str[i]);
        i += 2;
    }

    /* Print a new line character */
    _putchar('\n');
}
