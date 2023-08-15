#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(98);
    _putchar('0' + r);  /* Print the last digit */
    _putchar('\n');
    
    r = print_last_digit(0);
    _putchar('0' + r);  /* Print the last digit */
    _putchar('\n');

    r = print_last_digit(-1024);
    _putchar('0' + r);  /* Print the last digit */
    _putchar('\n');
    
    return (0);
}
