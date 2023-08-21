#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
    int length = 0;
    int start = 0;
    char temp;

    /* Calculate the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }

    length--;

    /* Reverse the string */
    while (start < length)
    {
        /* Swap characters at start and end positions */
        temp = s[start];
        s[start] = s[length];
        s[length] = temp;

        /* Move the pointers inward */
        start++;
        length--;
    }
}
