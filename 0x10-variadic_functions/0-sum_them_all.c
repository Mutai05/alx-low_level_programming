#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    if (n == 0)
        return (0);

    unsigned int i; /* Declare i before the loop */
    int sum = 0;

    va_list args;
    va_start(args, n);

    for (i = 0; i < n; i++) /* Initialize i before the loop */
    {
        sum += va_arg(args, int);
    }

    va_end(args);

    return (sum);
}

