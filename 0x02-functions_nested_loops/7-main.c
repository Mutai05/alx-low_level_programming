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
    
    r = print_last_digit(INT_MIN);  /* Using INT_MIN */
    _putchar('0' + (r * (r != -1)));  /* Print the last digit, handling INT_MIN case */
    _putchar('\n');
    
    return (0);
}
