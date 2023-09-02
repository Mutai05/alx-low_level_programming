/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of `s` that consist
 *         only of characters from `accept`.
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int match;

    while (*s) {
        for (match = 0; accept[match]; match++) {
            if (*s == accept[match]) {
                break;
            }
        }
        if (accept[match] == '\0') {
            return count;
        }
        count++;
        s++;
    }

    return count;
}
