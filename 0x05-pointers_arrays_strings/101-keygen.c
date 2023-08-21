#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char password[7];
    int i;
    
    srand(time(NULL));

    for (i = 0; i < 6; i++)
    {
        password[i] = rand() % 94 + 33;  /* Generates a random character between ASCII 33 and 126 */
    }
    password[i] = '\0';  /* Null-terminate the string */

    printf("%s\n", password);
    return (0);
}
