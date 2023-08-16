#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
    unsigned long int a = 1, b = 2, c;
    int count = 2; /* Start from 2 since we have already printed the first two numbers */

    printf("%lu, %lu", a, b);

    while (count < 98)
    {
        c = a + b;
        a = b;
        b = c;
        printf(", %lu", c);

        count++;

        /* Print a newline after every 10 numbers */
        if (count % 10 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}
